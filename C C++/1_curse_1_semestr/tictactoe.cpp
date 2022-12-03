#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 10
#define SPACE 32

#define num_of_endls 9
#define vert_wall 186
#define gor_wall 205
#define intersec_of_walls 206

#define wait 500

struct CELL{
	unsigned char s:2; //2-відсутність О/Х, 1-Х, 0-О
	COORD c;
};
CELL cell[3][3];
bool player; //0-O, 1-X
short dir;
COORD coord;
void move_up();
void move_down();
void move_left();
void move_right();
void ShowConsoleCursor(bool showFlag){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; 
    SetConsoleCursorInfo(out, &cursorInfo);
}
void gotoxy(int x, int y){
	COORD locCoord;
	locCoord.X = (x+56);
	locCoord.Y = (y+10);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), locCoord);
}
void field(){
	for(int i = 0; i < num_of_endls; i++)
		cout << endl;
	for(int i = 0; i < 7; i++){
		cout << "\t\t\t\t\t\t       ";
		if(i == 0)
			cout << (char)201 << (char)gor_wall << (char)203 << (char)gor_wall << (char)203 << (char)gor_wall << (char)187;
		if(i == 1 || i == 3 || i == 5)
			cout << (char)vert_wall << " " << (char)vert_wall << " " << (char)vert_wall << " " << (char)vert_wall;
		if(i == 2 || i == 4)
			cout << (char)204 << (char)gor_wall << (char)intersec_of_walls << (char)gor_wall << (char)intersec_of_walls << (char)gor_wall << (char)185;
		if(i == 6)
			cout << (char)200 << (char)gor_wall << (char)202 << (char)gor_wall << (char)202 << (char)gor_wall << (char)188;
		cout << endl;
	}
}
//void set_num(){
//	int k = 0;
//	for(int i = 0; i < 3; i++)
//		for(int j = 0; j < 3; j++){
//			if(cell[i][j].s == 2){
//				k++;
//				gotoxy((j*2), (i*2));
//				cout << k;
//			}
//		}
//}

void blinking(){
	while(!kbhit()){
		Sleep(wait);
		gotoxy(coord.X, coord.Y);
		if(player)
			cout << "X";
		else if(!player)
			cout << "O";
		Sleep(wait);
		gotoxy(coord.X, coord.Y);
		cout << " ";
	}
}
void move_up(){
	coord.Y -= 2;
	if(coord.Y < 0)
		coord.Y = 4;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++){
			if(cell[0][coord.X/2].s != 2 && cell[1][coord.X/2].s != 2 && cell[2][coord.X/2].s != 2){
				move_right();
			}
			else if(coord.X == cell[i][j].c.X && coord.Y == cell[i][j].c.Y && cell[i][j].s != 2)
				move_up();
		}
}
void move_down(){
	coord.Y += 2;
	if(coord.Y > 4)
		coord.Y = 0;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++){
			if(cell[0][coord.X/2].s != 2 && cell[1][coord.X/2].s != 2 && cell[2][coord.X/2].s != 2){
				move_right();
			}
			else if(coord.X == cell[i][j].c.X && coord.Y == cell[i][j].c.Y && cell[i][j].s != 2)
				move_down();
		}
}
void move_left(){
	coord.X -= 2;
	if(coord.X < 0)
		coord.X = 4;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++){
			if(cell[coord.Y/2][0].s != 2 && cell[coord.Y/2][1].s != 2 && cell[coord.Y/2][2].s != 2){
				move_down();
			}
			else if(coord.X == cell[i][j].c.X && coord.Y == cell[i][j].c.Y && cell[i][j].s != 2)
				move_left();
		}
}
void move_right(){
	coord.X += 2;
	if(coord.X > 4)
		coord.X = 0;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++){
			if(cell[coord.Y/2][0].s != 2 && cell[coord.Y/2][1].s != 2 && cell[coord.Y/2][2].s != 2){
				move_down();
			}
			else if(coord.X == cell[i][j].c.X && coord.Y == cell[i][j].c.Y && cell[i][j].s != 2)
				move_right();
		}
}
void direction(){
	while(1){
        dir=getch();
        switch(dir) {
        case UP: case 87: case 119:
			
            move_up();
            blinking();
            break; 
        case DOWN: case 83: case 115:
        	
            move_down();
            blinking();
            break;
        case LEFT: case 65: case 97:
			
            move_left();
            blinking();
            break;
        case RIGHT: case 68: case 100:
			
            move_right();
            blinking();
            break;
        case ENTER: case SPACE: case 13:
        	//X or O
        	for(int i = 0; i < 3; i++)
				for(int j = 0; j < 3; j++){
        			if(player && coord.X == cell[i][j].c.X && coord.Y == cell[i][j].c.Y && cell[i][j].s == 2){
        				cell[i][j].s = 1;
        				player = !player;
        				gotoxy(coord.X, coord.Y);
        				cout << "X";
					}
					else if(!player && coord.X == cell[i][j].c.X && coord.Y == cell[i][j].c.Y && cell[i][j].s == 2){
        				cell[i][j].s = 0;
        				player = !player;
        				gotoxy(coord.X, coord.Y);
        				cout << "O";
					}
				}
			break;
        case 27:
        	return;
        case 0: case 224:
        	break;
        default:
        	cout << "\a";
            break;
        }
    }
}
void zeroing(){
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++){
			cell[i][j].s = 2;
			cell[i][j].c.X = j*2;
			cell[i][j].c.Y = i*2;
		}
}
int main(){
	zeroing();
	ShowConsoleCursor(false);
	field();
//	set_num();
//	gotoxy(-56, -10);
//	cout << (int)' ';
//	cell[0][0].s = 1;
//	cell[0][1].s = 1;
//	cell[0][2].s = 1;
//	cell[1][0].s = 1;
//	cell[1][1].s = 1;
//	cell[1][2].s = 1;
//	cell[2][0].s = 1;
//	cell[2][1].s = 1; 
//	cell[2][2].s = 1;
	blinking();
	direction();
	gotoxy(-56, 10);
	if(dir == 27){
		exit(0);
	}
	return 0;
}
