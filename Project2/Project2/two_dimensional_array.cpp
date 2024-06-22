#include "two_dimensional_array.h"

const int two_dimensional_array<int>::size()//+
{
	return this->rows_size;
}

two_dimensional_array<int>::~two_dimensional_array()
{
	this->delete_all(this->size());
}

void two_dimensional_array<int*>::delete_all(int rows_size)//+ но TEST
{
	for (size_t i = 0; i < rows_size; i++)
	{
		delete[] &this->two_dim_array[i];//трэш??? что и почему &this
	}
	delete[] this->two_dim_array;
}

two_dimensional_array<int**>::two_dimensional_array(int aCols_size, int aRows_size) : rows_size{aRows_size}, cols_size{aCols_size}//+
{
	this->two_dim_array = new int*[aRows_size];
	for (size_t i = 0; i < aRows_size; i++)
	{
		this->two_dim_array[i] = new int[aCols_size];
	}
}

int* two_dimensional_array<int>::operator[](int element)
{

}