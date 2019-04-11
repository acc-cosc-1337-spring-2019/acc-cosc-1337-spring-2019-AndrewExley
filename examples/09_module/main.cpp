#include<fstream>
#include<iostream>
#include <string>
#include <vector>
#include "temperature.h"
#include "temperature_data.h"

int main() 
{
	std::vector<Temperature>temps{ Temperature(3, 79.5), Temperature(4, 85.9) };
	TemperatureData data("temps.txt"); //creates file
	data.save_readings(temps); //SAVES FIlE 
	auto readings = data.get_readings();
	for (auto r : readings)
	{
		std::cout << r.get_hour() << " " << r.get_reading() << "\n";
	}
	
	return 0;
}