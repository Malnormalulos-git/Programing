#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <time.h> 
using namespace std;
int main(){
	float arr[5][3];
	int n=0;
	srand((unsigned)time(NULL));
	cout<<"Array:\n";
	for(int i=0; i<5; i++){
 		for(int j=0; j<3; j++){
			*(arr[i]+j)=(rand()%661)*0.1-10.5;
			cout<<setw(5)<<*(*(arr+i)+j)<<" ";
			if((*(arr+i))[j]<20.5)
				n++;
		}
		cout<<endl;
	}
	cout<<"\nNumber of elements that less than 20.5: "<<n<<endl<<endl;
	system("pause"); 
	return 0;
}
