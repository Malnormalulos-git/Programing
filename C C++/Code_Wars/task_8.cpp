#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int get_sum(int a, int b){
	if(a == b){
		return a;
	}
	int left;
	int right;
	if(a > b){
		right = a;
		left = b;
	}
	else{
		right = b;
		left = a;
	}
	int sum = 0;
	for(int i = left; i <= right; i++){
		sum += i;
	}
	return sum;
}

int main(){
	
	return 0;
}
