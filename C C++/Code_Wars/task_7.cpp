#include <iostream>
#include <stdio.h>
//#include <math.h>
#include <stdlib.h>
using namespace std;

unsigned long long pow(unsigned long long number, unsigned long long power){
	if(power == 0){
		return 1;
	}
	return number*pow(number, power - 1);
}

unsigned int countBits(unsigned long long n){
	if(n == 0){
		return 0;
	}
	unsigned short counter = 0; 
	unsigned short power = 0;
	while(true){
//		cout << power << endl;
		if(n - pow(2, power + 1) > n || n - pow(2, power) == 0){
//			cout << "-------" << power << "------" << endl;
			n -= pow(2, power--);
			counter++;
			break;
		}
		else{
//			cout << power << endl;
			power++;
		}
	}
	while(n != 0){
		if(n - pow(2, power) < n){
			n -= pow(2, power--);
			counter++;
		}
		else{
			power--;
		}
	}
	return counter;
}

int main(){
//	cout << countBits(392902059);
//	cout << pow(2, 63)*2-1;
//	for(int i = 0; i < 64; i++)
//		cout << pow(2, i) << endl;
	cout << countBits(0) << endl;
    cout << countBits(4) << endl;
    cout << countBits(7) << endl;
    cout << countBits(9) << endl;
    cout << countBits(10) << endl;
    cout << countBits(26) << endl;
    cout << countBits(77231418) << endl;
    cout << countBits(12525589) << endl;
    cout << countBits(3811) << endl;
    cout << countBits(392902058) << endl;
	return 0;
}
