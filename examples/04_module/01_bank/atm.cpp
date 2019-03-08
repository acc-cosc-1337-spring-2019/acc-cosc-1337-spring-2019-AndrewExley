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
}
