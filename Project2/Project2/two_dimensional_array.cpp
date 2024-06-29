#include "Two_dimensional_array.h"

template <typename T>
const int Two_dimensional_array<T>::size()
{
	return this->rows_size;
}

template <typename T>
Two_dimensional_array<T>::~Two_dimensional_array()
{
	for (size_t i = 0; i < this->rows_size; i++)
	{
		delete[] this->two_dim_array[i];
	}
	delete[] this->two_dim_array;
}

template <typename T>
Two_dimensional_array<T>::Two_dimensional_array(size_t aCols_size, size_t aRows_size) : rows_size{aRows_size}, cols_size{aCols_size}
{
	this->two_dim_array = new int*[aRows_size];
	for (size_t i = 0; i < aRows_size; i++)
	{
		this->two_dim_array[i] = new int[aCols_size];
	}
}

template <typename T>
T* Two_dimensional_array<T>::operator[](size_t index)
{
	return this->two_dim_array[index];
}

template <typename T>
T Two_dimensional_array<T>::operator[](size_t index) const
{
	return *this->two_dim_array[index];
}