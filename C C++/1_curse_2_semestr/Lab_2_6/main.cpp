#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
using namespace std;

double func1(double x); 
double func2(double x); 
double func3(double x); 
typedef double (*PF)(double);
double integ(PF pf,double a,double b,int n);

int main() {
	
	return 0;
}
