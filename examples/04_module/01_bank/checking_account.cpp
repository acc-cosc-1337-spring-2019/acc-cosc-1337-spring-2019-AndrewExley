#include "checking_account.h"

CheckingAccount::CheckingAccount(int act, double bal)
{
}

double CheckingAccount::get_balance()
{
	std::cout << "CheckingAccount::get_balance()";
	return BankAccount::get_balance();
}
