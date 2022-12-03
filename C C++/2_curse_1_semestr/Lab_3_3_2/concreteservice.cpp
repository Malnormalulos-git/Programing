#include "concreteservice.h"

void CreditBank1::getInfo(){
	cout <<nameClient << ".Credit of Bank1: ";
	cout <<"sum "<< sumCredit <<" rate "<<rate <<"%\n";
}

CreditBank1::~CreditBank1(){
//	cout << "CreditBank1 destructor" << endl;
}


void CreditBank2::getInfo(){
	cout <<nameClient << ".Credit of Bank2: ";
	cout <<"sum "<< sumCredit <<" rate "<<rate <<"%\n";
}

CreditBank2::~CreditBank2(){
//	cout << "CreditBank2 destructor" << endl;
}


void DepositBank1::getInfo(){
	cout <<nameClient << ".Deposit of Bank1: ";
	cout <<"sum "<< sumDeposit <<" rate "<<rate <<"%\n";
}

DepositBank1::~DepositBank1(){
//	cout << "DepositBank1 destructor" << endl;
}


void DepositBank2::getInfo(){
	cout <<nameClient << ".Deposit of Bank2: ";
	cout <<"sum "<< sumDeposit <<" rate "<<rate <<"%\n";
}

DepositBank2::~DepositBank2(){
//	cout << "DepositBank2 destructor" << endl;
}


void MortgageBank1::getInfo(){
	cout <<nameClient << ".Mortgage of Bank1: ";
	cout <<"sum "<< sumMortgage <<" rate "<<rate <<"%\n";
}

MortgageBank1::~MortgageBank1(){
//	cout << "MortgageBank1 destructor" << endl;
}


void MortgageBank2::getInfo(){
	cout <<nameClient << ".Mortgage of Bank2: ";
	cout <<"sum "<< sumMortgage <<" rate "<<rate <<"%\n";
}

MortgageBank2::~MortgageBank2(){
//	cout << "MortgageBank2 destructor" << endl;
}
