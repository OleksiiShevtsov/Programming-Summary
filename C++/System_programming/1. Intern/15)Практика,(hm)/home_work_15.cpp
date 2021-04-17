#include <iostream>

using namespace std;
enum Currency{ UAH, USD };
class IAccount {
	public:
	    virtual ~IAccount() {}
	    virtual Currency GetCurrency() const = 0; // Currency is the enum with values USD, UAH
	    virtual int GetCreditBalance() const = 0;
	    virtual int GetMainBalance() const = 0;
	    virtual int GetDepositBalance() const = 0;
	    virtual void Deposit(int amount) = 0;
	    virtual void Withdrow(int amount) = 0;
	    virtual bool GetCredit(int amount) = 0; 
};

class IBank {
	public:
	    virtual ~IBank() {}
	    //virtual SomeType GetAllCreditCardsByUserId(string) const = 0;
};

int main(){
	
	
	
	return 0;
}
