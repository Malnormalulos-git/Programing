#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int solution (int number){
	if(number <= 2){
		return 0;
	}
	int sum = 0;
	for(int i = 2; i < number; i++){
		if(i%3 == 0){
			sum += i;
		}
		else if(i%5 == 0){
			sum += i;
		}
	}
	return sum;
}

int main(){
	cout << solution(10);
	return 0;
}
