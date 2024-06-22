#include "two_dimensional_array.h"

const int Two_dimensional_array<int>::size()//+
{
	return this->rows_size;
}

Two_dimensional_array<int>::~Two_dimensional_array()
{
	for (size_t i = 0; i < this->rows_size; i++)
	{
		delete[] this->two_dim_array[i];
	}
	delete[] this->two_dim_array;
}

/*void Two_dimensional_array<int>::delete_all(int rows_size)//+
{
	
}*/

Two_dimensional_array<int>::Two_dimensional_array(int aCols_size, int aRows_size) : rows_size{aRows_size}, cols_size{aCols_size}//+
{
	this->two_dim_array = new int*[aRows_size];
	for (size_t i = 0; i < aRows_size; i++)
	{
		this->two_dim_array[i] = new int[aCols_size];
	}
}

/*int** Two_dimensional_array<int>::operator[](int element)
{

}*/