#include <stdlib.h>
#include <iostream>
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

struct CELL {
	unsigned char s : 2; //2 - nothing, 1-X, 0-O
	COORD c;
};
CELL cell[3][3];
bool player; //0-O, 1-X
short dir, cx, cy;
void ShowConsoleCursor(bool showFlag) {
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO     cursorInfo;
	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag;
	SetConsoleCursorInfo(out, &cursorInfo);
}
void gotoxy(int x, int y) {
	COORD locCoord;
	locCoord.X = (x + 56);
	locCoord.Y = (y + 10);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), locCoord);
}
void field() {
	for (int i = 0; i < num_of_endls; i++)
		cout << endl;
	for (int i = 0; i < 7; i++) {
		cout << "\t\t\t\t\t\t       ";
		if (i == 0)
			cout << (char)201 << (char)gor_wall << (char)203 << (char)gor_wall << (char)203 << (char)gor_wall << (char)187;
		if (i == 1 || i == 3 || i == 5)
			cout << (char)vert_wall << " " << (char)vert_wall << " " << (char)vert_wall << " " << (char)vert_wall;
		if (i == 2 || i == 4)
			cout << (char)204 << (char)gor_wall << (char)intersec_of_walls << (char)gor_wall << (char)intersec_of_walls << (char)gor_wall << (char)185;
		if (i == 6)
			cout << (char)200 << (char)gor_wall << (char)202 << (char)gor_wall << (char)202 << (char)gor_wall << (char)188;
		cout << endl;
	}
}
void blinking() {
	while (!_kbhit()) {
		Sleep(wait);
		gotoxy(cell[cy][cx].c.X, cell[cy][cx].c.Y);
		if (player)
			cout << "X";
		else if (!player)
			cout << "O";
		Sleep(wait);
		gotoxy(cell[cy][cx].c.X, cell[cy][cx].c.Y);
		cout << " ";
	}
}
void zeroing() {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			cell[i][j].s = 2;
			cell[i][j].c.X = j * 2;
			cell[i][j].c.Y = i * 2;
		}
	cx = 0;
	cy = 0;
	player = 1;
}
void win(short winner) {
	if(winner == 1){
		gotoxy(0, -2);
		cout << "X won";
	}
	else if(winner == 0){
		gotoxy(0, -2);
		cout << "O won";
	}
	else if(winner == 2){
		gotoxy(0, -2);
		cout << "Draw";
	}
	gotoxy(-9, 6);
	cout << "Press any key to restart";
	while(!_kbhit()){
		Sleep(1000);
		gotoxy(-9, 6);
		cout << "Press any key to restart";
		Sleep(1000);
		gotoxy(-9, 6);
		cout << "                        ";
	}
	dir = _getch();
	dir = 13;
	gotoxy(-56, -10);
	field();
	gotoxy(0, -2);
	cout << "     ";
	zeroing();
}
void check_win() {
	short counter = 0;
	for(int i = 0; i < 3; i++){
		if ((cell[0][i].s == 0 && cell[1][i].s == 0 && cell[2][i].s == 0) ||
			(cell[i][0].s == 0 && cell[i][1].s == 0 && cell[i][2].s == 0))
				win(0);
		if ((cell[0][i].s == 1 && cell[1][i].s == 1 && cell[2][i].s == 1) ||
			(cell[i][0].s == 1 && cell[i][1].s == 1 && cell[i][2].s == 1))
				win(1);
	}
	if ((cell[0][0].s == 0 && cell[1][1].s == 0 && cell[2][2].s == 0) ||
		(cell[0][2].s == 0 && cell[1][1].s == 0 && cell[2][0].s == 0))
			win(0);
	if ((cell[0][0].s == 1 && cell[1][1].s == 1 && cell[2][2].s == 1) ||
		(cell[0][2].s == 1 && cell[1][1].s == 1 && cell[2][0].s == 1))
			win(1);
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
				if(cell[i][j].s != 2)
					counter++;
	if(counter == 9)
		win(2);
}
void move_up() {
	if (cell[0][cx].s != 2 && cell[1][cx].s != 2 && cell[2][cx].s != 2) {
		for (int i = 0; i < 3; i++) 
			for (int j = 0; j < 3; j++) 
				if (cell[i][j].s == 2) {
					cx = j;
					cy = i;
					return;
				}
	}
	else if ((cell[0][cx].s != 2 && cell[1][cx].s != 2 && cy == 2) ||
			 (cell[0][cx].s != 2 && cell[2][cx].s != 2 && cy == 1) ||
			 (cell[1][cx].s != 2 && cell[2][cx].s != 2 && cy == 0)) {
		 for (int i = 0; i < 3; i++) 
			 for (int j = 0; j < 3; j++) 
				 if (cell[i][j].s == 2 && j != cx) {
					 cx = j;
					 cy = i;
					 return;
				 }
	}
	cy--;
	if (cy < 0)
		cy = 2;
	if (cell[cy][cx].s != 2)
		move_up();
}
void move_down() {
	if (cell[0][cx].s != 2 && cell[1][cx].s != 2 && cell[2][cx].s != 2) {
		for (int i = 2; i >= 0; i--) 
			for (int j = 2; j >= 0; j--) 
				if (cell[i][j].s == 2) {
					cx = j;
					cy = i;
					return;
				}
	}
	else if ((cell[0][cx].s != 2 && cell[1][cx].s != 2 && cy == 2) ||
			 (cell[0][cx].s != 2 && cell[2][cx].s != 2 && cy == 1) ||
			 (cell[1][cx].s != 2 && cell[2][cx].s != 2 && cy == 0)) {
		 for (int i = 2; i >= 0; i--) 
			 for (int j = 2; j >= 0; j--) 
				 if (cell[i][j].s == 2 && j != cx) {
					 cx = j;
					 cy = i;
					 return;
				 }
	}
	cy++;
	if (cy > 2)
		cy = 0;
	if (cell[cy][cx].s != 2)
		move_down();
}
void move_left() {
	if (cell[cy][0].s != 2 && cell[cy][1].s != 2 && cell[cy][2].s != 2) {
		for (int i = 0; i < 3; i++) 
			for (int j = 0; j < 3; j++) 
				if (cell[i][j].s == 2) {
					cx = j;
					cy = i;
					return;
				}
	}
	else if ((cell[cy][0].s != 2 && cell[cy][1].s != 2 && cx == 2) ||
			 (cell[cy][0].s != 2 && cell[cy][2].s != 2 && cx == 1) ||
			 (cell[cy][1].s != 2 && cell[cy][2].s != 2 && cx == 0)){
		for (int i = 0; i < 3; i++) 
			for (int j = 0; j < 3; j++) 
				if (cell[i][j].s == 2 && i != cy) {
					cx = j;
					cy = i;
					return;
				}
	}		
	cx--;
	if (cx < 0)
		cx = 2;
	if (cell[cy][cx].s != 2)
		move_left();
}
void move_right() {
	if (cell[cy][0].s != 2 && cell[cy][1].s != 2 && cell[cy][2].s != 2) {
		for (int i = 0; i < 3; i++) 
			for (int j = 0; j < 3; j++) 
				if (cell[i][j].s == 2) {
					cx = j;
					cy = i;
					return;
				}
	}
	else if ((cell[cy][0].s != 2 && cell[cy][1].s != 2 && cx == 2) ||
			 (cell[cy][0].s != 2 && cell[cy][2].s != 2 && cx == 1) ||
			 (cell[cy][1].s != 2 && cell[cy][2].s != 2 && cx == 0)) {
		for (int i = 2; i >= 0; i--) 
			for (int j = 2; j >= 0; j--) 
				if (cell[i][j].s == 2 && i != cy) {
					cx = j;
					cy = i;
					return;
				}
	}
	cx++;
	if (cx > 2)
		cx = 0;
	if (cell[cy][cx].s != 2)
		move_right();
}
void direction() {
	while (1) {
		dir = _getch();
		switch (dir) {
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
			if (player && cell[cy][cx].s == 2) {
				cell[cy][cx].s = 1;
				player = !player;
				gotoxy(cell[cy][cx].c.X, cell[cy][cx].c.Y);
				cout << "X";
			}
			else if (!player && cell[cy][cx].s == 2) {
				cell[cy][cx].s = 0;
				player = !player;
				gotoxy(cell[cy][cx].c.X, cell[cy][cx].c.Y);
				cout << "O";
			}
			check_win();
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
int main() {
	ShowConsoleCursor(false);
	zeroing();
	field();
	blinking();
	direction();
	gotoxy(-56, 10);
	if (dir == 27) {
		exit(0);
	}
	return 0;
}
