#if !defined(CLIENTBASE_H)
#define CLIENTBASE_H
#include "client.h"
#include "bank.h"
#include "businesslogic.h"

class ClientBase{
private:
	Client * first;
	string name;
public:
	ClientBase();
	void addClient();
	void choceBank(Bank &, Bank &/*, BusinessLogic &*/);
	void display();
	~ClientBase();
};
#endif
