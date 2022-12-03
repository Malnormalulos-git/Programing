#include <conio.h>
#include <iostream>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main()
{
    int c = 0;
    while(1)
    {
        c = 0;
        c=getch();
		fflush(stdin);
        switch(c) {
        case KEY_UP:
            cout << "\t" << c << endl << "Up" << endl;//key up
            break;
        case KEY_DOWN:
            cout << "\t" << c << endl << "Down" << endl;   // key down
            break;
        case KEY_LEFT:
            cout << "\t" << c << endl << "Left" << endl;  // key left
            break;
        case KEY_RIGHT:
            cout << "\t" << c << endl << "Right" << endl;  // key right
            break;
        default:
            cout << "\t" << c << endl << "null" << endl;  // not arrow
            break;
        }
    }
    return 0;
}
