#include "ClientBase.h"

ClientBase::ClientBase(){
	cout << "Enter name of client base: ";
	cin >> name;
	first = NULL;
}

void ClientBase::addClient(){
	string clName;
	int psc, psd, psm;
	cout << "Enter client name: ";
	cin >> clName;
	cout << "Enter principal sum for credit: ";
	cin >> psc;
	cout << "Enter principal sum for deposit: ";
	cin >> psd;
	cout << "Enter principal sum for mortgage: ";
	cin >> psm;
	Client * newClient = new Client(clName, psc, psd, psm);
	newClient -> next = first;
	first = newClient;
}

void ClientBase::choceBank(Bank & b1, Bank & b2/*, BusinessLogic & bl*/){
	Client * current = first;
	BusinessLogic bl;
	while(current){
		bl.choice(b1, b2, current);
		current = current -> next ;
	}
}

void ClientBase::display(){
	cout << name << endl << endl;
	Client * current = first;
	int i = 0;
	while(current){
		i++;
		current -> credit -> getInfo();
		current -> deposit -> getInfo();
		current -> mortgage -> getInfo();
		cout << endl;
		current = current -> next ;
	}
}

ClientBase::~ClientBase(){
	Client * current = first;
	Client * tmp;
	while(current){
		delete current -> credit;
		delete current -> deposit;
		delete current -> mortgage;
		tmp = current -> next ;
		delete current;
		current = tmp;
	}
}
