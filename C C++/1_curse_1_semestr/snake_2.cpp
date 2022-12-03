#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;

#define Head 88
#define Food 253
#define Body 79
#define End 32

#define size_x 48
#define size_y 26

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define waitx 90
#define waity 150

struct BODY{
	unsigned char X;
	unsigned char Y;
};
COORD head, apple;
short len, best_score, dir, old_dir;
BODY *bod = new BODY[len + 3], *tmp;
void arr(){
	BODY *tmp = new BODY[len + 4];
	for(int i = 0; i < (len + 3); i++){
		tmp[i].X = bod[i].X;
		tmp[i].Y = bod[i].Y;
	}
	delete[] bod;
	bod = tmp;
	for(int i = 0; i < (len + 3); i++){
		bod[i].X = tmp[i].X;
		bod[i].Y = tmp[i].Y;
	}
	tmp = NULL;
}
void ShowConsoleCursor(bool showFlag){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; 
    SetConsoleCursorInfo(out, &cursorInfo);
}
void field(){
	for(int i = 0; i < size_y; i++){
		if(i == 0)
			cout << "\t\t\t\t" << (char)201;
		else if(i == size_y-1)
			cout << "\t\t\t\t" << (char)200;
		else 
			cout << "\t\t\t\t" << (char)186;
		for(int j = 0; j < size_x; j++){
			if(i == 0 || i == size_y-1)
				cout << (char)205;
			else
				cout << " ";
		}
		if(i == 0)
			cout << (char)187 << endl;
		else if(i == size_y-1)
			cout << (char)188 << endl;
		else 
			cout << (char)186 << endl;
	}
}
void gotoxy(int x, int y){
	COORD coord;
	coord.X = (x+33);
	coord.Y = (y+1);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void food(){
	apple.X=rand()%48;
	apple.Y=rand()%24;
	gotoxy(apple.X, apple.Y);
	for(int i = 0; i < (len + 3); i++){
		if((head.X == apple.X && head.Y == apple.Y)/* || (.X == apple.X && .Y == apple.Y) || () */){
			apple.X=rand()%48;
			apple.Y=rand()%24;
			i = 0;
		}
	}
	cout << (char)Food;
}
void check_food(){
	if(head.X == apple.X && head.Y == apple.Y){
        len++;
        food();
        gotoxy(-23, 0);
        cout << (len*10);
        arr();
    }
    gotoxy(apple.X, apple.Y);
    cout << (char)Food;
}
void body(){
	int i = (len+1);
//	bod[0].X = head.X;
//	bod[0].Y = head.Y;
	do{
		if(len == 0){
			gotoxy(bod[0].X, bod[0].Y);
			cout << (char)End;
			break;
		}
		if(i > 0){
			bod[i].X = bod[i - 1].X;
			bod[i].Y = bod[i - 1].Y;
		}
		bod[0].X = head.X;
		bod[0].Y = head.Y;
		gotoxy(bod[0].X, bod[0].Y);
		cout << (char)Body;
		gotoxy(bod[len+1].X, bod[len+1].Y);
		cout << (char)End;
	}while(i--, i > 0);	
}
void over(){
	gotoxy(-33, -1);
	field();
	if(len > best_score)
		best_score = len;
		gotoxy(19, 10);
		cout << "Game over";
		gotoxy(17, 11);
		cout << "Your score: " << (len*10);
		gotoxy(12, 12);
		cout << "Press any key to restart";
		len = 0;
		dir=getch();
		if(dir == 27){
		exit(0);
		}
		gotoxy(-33, -1);
		field();
		food();
		gotoxy(-30, 0);
		cout << "Score: " << (len*10);
		gotoxy(-30, 1);
		cout << "Best score: " << (best_score*10);
}
void check_death(){
	for(int i = 0; i < len; i++){
		if(head.X == bod[i].X && head.Y == bod[i].Y){
			over();
		}
	}
}
void move_down(){
	while(!kbhit()){
			Sleep(waity);
		check_food();
		body();
		head.Y++;
		check_death();
		if(head.Y == (size_y-2)){
			head.Y = 0;
		}
		gotoxy(head.X, head.Y);
		cout << (char)Head;
	}
}
void move_up(){
	int i = 0;
	while(!kbhit()){
			Sleep(waity);
		check_food();
		body();
		head.Y--;
		check_death();
		if(head.Y < 0){
			head.Y = (size_y-3);
		}
		gotoxy(head.X, head.Y);
		cout << (char)Head;
	}
}
void move_right(){
	while(!kbhit()){
			Sleep(waitx);
		check_food();
		body();
		head.X++;
		check_death();
		if(head.X == size_x){
			head.X = 0;
		}
		gotoxy(head.X, head.Y);
		cout << (char)Head;
	}
}
void move_left(){
	while(!kbhit()){
			Sleep(waitx);
		check_food();
		body();
		head.X--;
		check_death();
		if(head.X < 0){
			head.X = (size_x-1);
		}
		gotoxy(head.X, head.Y);
		cout << (char)Head;
	}
}
void direction(){
	while(1){
        dir=getch();
        switch(dir) {
        case UP: case 87: case 119:
        	dir = UP;
        	if(old_dir == DOWN && len > 0){
        		move_down();
        		break;
        	}
            move_up();
            old_dir = dir;
            break;
        case DOWN: case 83: case 115:
        	dir = DOWN;
        	if(old_dir == UP && len > 0){
        		move_up();
        		break;
        	}
            move_down();
            old_dir = dir;
            break;
        case LEFT: case 65: case 97:
        	dir = LEFT;
        	if(old_dir == RIGHT && len > 0){
        		move_right();
        		break;
        	}
            move_left();
            old_dir = dir;
            break;
        case RIGHT: case 68: case 100:
        	dir = RIGHT;
        	if(old_dir == LEFT && len > 0){
        		move_left();
        		break;
        	}
            move_right();
            old_dir = dir;
            break;
        case 27:
        	gotoxy(-33, 23);
        	return;
        case 0: case 224:
        	break;
        default:
        	cout << "\a";
            break;
        }
    }
}
int main(){
	srand((unsigned)time(NULL));
	ShowConsoleCursor(false);
	field();
	gotoxy(13, 9);
	cout << "Press any key to start";
	gotoxy(10, 10);
	cout << "Use arrows or w a s d to move";
	gotoxy(18, 11);
	cout << "Esc to quit";
	dir=getch();
	if(dir == 27){
		exit(0);
	}
	gotoxy(-33, -1);
	field();
	gotoxy(-30, 0);
	cout << "Score: " << (len*10);
	food();
	direction();
	exit(0);
}

