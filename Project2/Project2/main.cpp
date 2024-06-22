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
	int size = 6;
	pow(size);

	std::vector<int> vec;
	vec.reserve(6);
	for (size_t i = 0; i < size; i++)
	{
		vec.push_back(i);
	}
	vec[2] = -99;//=)

	pow(vec);
	return 0;
}