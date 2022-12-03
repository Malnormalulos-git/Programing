#include "header.h"

Roman::Roman(int v, string a, int p, string t, int w, string l): numOfVolumes(v), Novel(a, p, t, w, l){
	cout << "\nConstructor of Roman \n";
}

Roman::~Roman (){
	cout << "Destructor of Roman \n";
}

void Roman::showInfo (){
	cout << "Roman:\n";
	cout << "Number of volumes: " << numOfVolumes << endl;
	Novel::showInfo();
}
