#include "atm.h"
#include<iostream>


void ATM::display_balance()
{
	std::cout << "Balance: " << customer.get_account().get_balance();
}

void ATM::deposit(double amt)
{
}

void ATM::withdraw(double amt)
{
	customer.get_account().withdraw
}

void ATM::display_transactions() const
{
	cout << "Type " << "Amount " << "Balance ";
	for (auto tran : customer.get_account().get_transactions())
	{
		std::cout << tran;
	}
}
