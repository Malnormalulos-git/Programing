#include "client.h"

Client::Client (string nm, int psc, int psd, int psm): name(nm), principalSumCredit(psc), 
													principalSumDeposit(psd), principalSumMortgage(psm){ }

string Client::getName(){ 
	return name;
}

int Client::getPrincipalSumCredit(){
	return principalSumCredit;
}

int Client::getPrincipalSumDeposit(){
	return principalSumDeposit;
}

int Client::getPrincipalSumMortgage(){
	return principalSumMortgage;
}

Client::~Client(){
//	cout << "Client destructor" << endl;
}
