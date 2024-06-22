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
	//* cout << table[i][j]; * table[i][j] = value;.
	
	return 0;
}