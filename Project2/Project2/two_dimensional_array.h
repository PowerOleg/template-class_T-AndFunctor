#pragma once

template<typename T>
class Two_dimensional_array
{
public:
	Two_dimensional_array(size_t aCols_size, size_t aRows_size) : rows_size{ aRows_size }, cols_size{ aCols_size }
	{
		this->two_dim_array = new int* [aRows_size];
		for (size_t i = 0; i < aRows_size; i++)
		{
			this->two_dim_array[i] = new int[aCols_size];
		}
	}
	const int size()
	{
		return this->rows_size;
	}
	T* operator[](size_t index)
	{
		return this->two_dim_array[index];
	}

	const T operator[](size_t index) const
	{
		return *this->two_dim_array[index];
	}
	~Two_dimensional_array()
	{
		for (size_t i = 0; i < this->rows_size; i++)
		{
			delete[] this->two_dim_array[i];
		}
		delete[] this->two_dim_array;
	}
private:
	T** two_dim_array;
	size_t rows_size;
	size_t cols_size;
};
