#include "businesslogic.h"
int main(){
	static const int n = 5;
	srand(time(0));
	
	string names[n] ={"Abramob", "Borisov", "Verbina", "Grishin", "Dubovik"};
	// principal sum for credit
	int psc[n] = {20000, 21000, 40000, 15000, 25000};
	// principal sum for deposit
	int psd[n] = {41000, 33000, 22000, 55000, 35000};
	
	Client * client[n];
	
	for(int i =0; i < n; i++)
		client[i] = new Client(names[i], psc[i], psd[i]);
	// minimal rate of credit of the bank -1(30..38)
	int mc1 = 30;
	// minimal rate of deposit of the bank -1(18..26)
	int md1 = 18;
	// minimal rate of credit of the bank -2(29..37)
	int mc2 = 29;
	// minimal rate of deposit of the bank -2(17..25)
	int md2 = 17;
	
	Bank b1(mc1, md1);
	Bank b2(mc2, md2);
	
	BusinessLogic bs;
	
	for(int i = 0; i < n; i++){
		bs.choice(b1, b2, client[i]);
		client[i] -> credit -> getInfo();
		client[i] -> deposit -> getInfo();
		cout << endl;
	}
	
	for(int i = 0; i < n; i++){
		delete client[i] -> credit;
		delete client[i] -> deposit;
		delete client[i];
		cout << endl;
	}
	return 0;
}
