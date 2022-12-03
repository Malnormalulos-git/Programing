#include "abstractservice.h"

void AbstractService::setInfo(Client * c, int r){
	nameClient = c -> getName();
	sumCredit = c -> getPrincipalSumCredit();
	sumDeposit = c -> getPrincipalSumDeposit();
	sumMortgage = c -> getPrincipalSumMortgage();
	rate = r;
}

AbstractService::~AbstractService(){ 
//	cout << "AbstractService destructor" << endl;
}
