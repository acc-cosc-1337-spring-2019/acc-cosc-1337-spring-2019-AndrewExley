#include "dynamic_memory.h"
#include <iostream>
//

void allocate_use_release()
{
	int stack_num{ 5 };//stack vaiable
	int*num = new int(5);//heap, data variable
	
	std::cout << *num; //USE
	delete num;//RELEASE
	num = nullptr;
}
