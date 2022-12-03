#include "businesslogic.h"

void BusinessLogic::choice(Bank & b1, Bank & b2, Client * c){
	int c1 = b1.getCreditRate();
	int d1 = b1.getDepositRate();
	int m1 = b1.getMortgageRate();
	
	int c2 = b2.getCreditRate();
	int d2 = b2.getDepositRate();
	int m2 = b2.getMortgageRate();
	
	Bank1Department * ptrB1 = new Bank1Department;
	Bank2Department * ptrB2 = new Bank2Department;
	
	if(c1 <= c2){
		credit = ptrB1 -> createCredit(c, c1);
	}
	else{
		credit = ptrB2 -> createCredit(c, c2);
	}
	
	if(d1 >= d2){
		deposit = ptrB1 -> createDeposit(c, d1);
	}
	else{
		deposit = ptrB2 -> createDeposit(c, d2);
	}
	
	if(m1 <= m2){
		mortgage = ptrB1 -> createMortgage(c, m1);
	}
	else{
		mortgage = ptrB2 -> createMortgage(c, m2);
	}
	
	c -> credit = credit;
	c -> deposit = deposit;
	c -> mortgage = mortgage;
	delete ptrB1;
	delete ptrB2;
}

BusinessLogic::~BusinessLogic(){
//	cout << "BusinessLogic destructor" << endl;
}
