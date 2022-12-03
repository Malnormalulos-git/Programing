#include <stdlib.h> 
#include <iostream> 
#include <time.h>  
#include <iomanip> 
#include <math.h>
using namespace std;
template <class A>
A sum(A a, A b, A c, A d){
	A sum = 0;
	if(a%2 == 0)
		sum+=a;
	if(b%2 == 0)
		sum+=b;
	if(c%2 == 0)
		sum+=c;
	if(d%2 == 0)
		sum+=d;
	return sum;
}

int main(){
	char c1 = 85, c2 = 60, c3 = 41, c4 = 56;
	cout << "Int_sum(-3, 4, 7, -8) = " << sum(-3, 4, 7, -8) << endl;
	cout << "Long_sum(-12323544, 12323544, 222222, 11) = " << sum(-12323544, 12323544, 222222, 11) << endl;
	printf("Char_sum('%c', '%c', '%c', '%c') = %d\n", c1, c2, c3, c4, sum(c1, c2, c3, c4));
}
