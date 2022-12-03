#if !defined(BUSINESS_H)
#define BUSINESS_H

#include "bank.h"
#include "concretebankdep.h"

class BusinessLogic{
	AbstractService * credit;
	AbstractService * deposit;
public:
	void choice(Bank &, Bank &, Client *);
};
#endif
