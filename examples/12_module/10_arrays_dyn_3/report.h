//
#ifndef REPORT_H
#define REPORT_H
#include "examples/12_module/08_arrays_dyn_1/bank_account.h"

class Report
{
public:
	Report();
	~Report();
	void display();
private:
	BankAccount* accounts;
};

#endif // !Report_H