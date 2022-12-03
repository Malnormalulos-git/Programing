#if !defined(BANK_DEPS_H)
#define BANK_DEPS_H
#include "abstractbankdep.h"
#include "concreteservice.h"
#include <iostream>
using namespace std;

class Bank1Department: public AbstractBankDepartment{
public:
	AbstractService * createCredit(Client *, int);
	AbstractService * createDeposit(Client *, int);
	AbstractService * createMortgage(Client *, int);
	~Bank1Department();
};

class Bank2Department: public AbstractBankDepartment{
public:
	AbstractService * createCredit(Client *, int);
	AbstractService * createDeposit(Client *, int);
	AbstractService * createMortgage(Client *, int);
	~Bank2Department();
};
#endif
