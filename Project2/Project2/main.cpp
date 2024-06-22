#include <iostream>
#include <cmath>
#include <vector>
#include "two_dimensional_array.h"

template<class T> void pow(T var)
{
	std::cout << "[OUT]: " << std::pow(var, 2) << std::endl;
}

template <> void pow(std::vector<int> vec)
{
	printf("[OUT]:");
	for (int value : vec)
	{
		std::cout << " " << std::pow(value, 2);
	}
	std::cout << std::endl;
}




int main(int argc, char** argv)
{
	//setlocale(LC_ALL, "ru");
	Two_dimensional_array<int> table(6, 2);
	table[0][0] = 8;
	table[5][1] = 1;
	std::cout << table[0][0] << " ";
	std::cout << table[5][1] << " ";
	/*for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 2; j++) {
			//int address = table.two_dim_array[i][j];
			std::cout << table[i][j] <<  " ";
		}
		std::cout << std::endl;
	}*/
	//auto var = 
	//std::cout << var;
	// * table[i][j] = value;.
	
	return 0;
}