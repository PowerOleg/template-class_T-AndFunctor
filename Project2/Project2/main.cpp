#include <iostream>
#include <cmath>
#include <vector>
#include "Two_dimensional_array.h"

int main(int argc, char** argv)
{
	int cols = 6;
	int rows = 3;
	auto table = Two_dimensional_array<int>(cols, rows);
	int count = 0;
	//fill
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++) {
			table[i][j] = ++count;
		}
		std::cout << std::endl;
	}

	//print
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++) {
			std::cout << table[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	
	return 0;
}