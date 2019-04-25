#include "memory_leak.h"

int main() 
{
	memory_leak(); //we leaked memory (a little bit)
	while (true)
	{
		memory_leak();
	}
	return 0;
}