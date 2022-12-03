#if !defined(CLIENT_H)
#define CLIENT_H

#include <iostream>

using namespace std;

class AbstractService;
class ClientBase;

class Client{
	friend ClientBase;
	Client * next;
	string name;
	int principalSumCredit;
	int principalSumDeposit;
	int principalSumMortgage;
public:
	Client(string, int, int, int);
	
	string getName();
	int getPrincipalSumCredit();
	int getPrincipalSumDeposit();
	int getPrincipalSumMortgage();
	
	AbstractService * credit;
	AbstractService * deposit;
	AbstractService * mortgage;
	
	~Client();
};
#endif
