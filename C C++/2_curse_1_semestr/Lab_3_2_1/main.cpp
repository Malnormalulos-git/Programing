#include "header.h"

int main(){
	ExerciseBook eb("Ivan Student ", 96, "C++");
	eb.showInfo ();
	Novel nv ("J. Barnes", 102, "Metroland", 51120, "en");
	nv.showInfo();
	Manual man(222, 22, "Phone", 45, 5, 1000, "en");
	man.showInfo();
	return 0;
}
