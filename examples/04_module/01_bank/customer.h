#ifdef Customer_H
#defime Customer_H
#include"bank_account.h"
class Customer
{
	public
		Customer(BankAcount act) :account(act);{}
	double get_balance() const { return account.get balance(); }
private:
	BankAccount account;
};
#endif // !CUSTOMER_H