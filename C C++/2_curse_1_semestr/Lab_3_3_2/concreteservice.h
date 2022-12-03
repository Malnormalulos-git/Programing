#if !defined(C_SERVICE_H)
#define C_SERVICE_H

#include "abstractservice.h"

class CreditBank1: public AbstractService{
public:
	void getInfo();
	~CreditBank1();
};

class CreditBank2: public AbstractService{
public:
	void getInfo();
	~CreditBank2();
};

class DepositBank1: public AbstractService{
public:
	void getInfo();
	~DepositBank1();
};

class DepositBank2: public AbstractService{
public:
	void getInfo();
	~DepositBank2();
};

class MortgageBank1: public AbstractService{
public:
	void getInfo();
	~MortgageBank1();
};

class MortgageBank2: public AbstractService{
public:
	void getInfo();
	~MortgageBank2();
};
#endif
