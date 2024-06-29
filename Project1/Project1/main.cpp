#include <iostream>
#include <cmath>
#include <vector>

template<class T> T pow(T var)
{
	return std::pow(var, 2);
	
}

void print(const std::vector<int>& vec)
{
	printf("[OUT]:");
	for (const int& value : vec)
	{
		std::cout << " " << value;
	}
	std::cout << std::endl;
}

template <> std::vector<int> pow(std::vector<int> vec)
{
	for (int& value : vec)
	{
		value = std::pow(value, 2);
	}
	return vec;
}

int main(int argc, char** argv)
{
	int size = 6;
	std::cout << "[OUT]: " << pow(size) << std::endl;
	

	std::vector<int> vec;
	vec.reserve(6);
	for (size_t i = 0; i < size; i++)
	{
		vec.push_back(i);
	}
	vec[2] = -99;

	vec = pow(vec);
	print(vec);
	return 0;
}