#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
#pragma pack(push,1)
struct NUM{
	int fac;
	int spec;
	int bud;
};
struct UN{ 
	char *city;
	char *name;
	NUM num;};
int main(){
	UN universities[4]={{"Zaporizhia", "Nationalnyi universytet Zaporizka politehnika", 30, 47, 189},
						{"Kyiv", "Kyivskyi politehnichnyi instytut", 47, 94, 294}};
	universities[2].city="Lviv"; 
	universities[2].name="Nationalnyi universytet Lvivska politehnika"; 
	universities[2].num.fac=28;
	universities[2].num.spec=52;
	universities[2].num.bud=205;
	universities[3].city="Poltava"; 
	universities[3].name="Poltavskyi Derzavnyi medychnyi universytet"; 
	universities[3].num.fac=22;
	universities[3].num.spec=31;
	universities[3].num.bud=156;
	for(int i=0; i<4; i++){
		cout<<"City: "<<universities[i].city<<endl;
		cout<<"University: "<<universities[i].name<<endl;
		cout<<"Number of faculties: "<<universities[i].num.fac<<endl;
		cout<<"Number of specialties: "<<universities[i].num.spec<<endl;
		cout<<"Number of budget places: "<<universities[i].num.bud<<endl<<endl;
	}
	cout<<"Sizeof(Array of structures): "<<sizeof(universities)<<endl;
	cout<<"Sizeof(Structure): "<<sizeof(universities[0])<<endl;
	system("pause");
	return 0;
}
