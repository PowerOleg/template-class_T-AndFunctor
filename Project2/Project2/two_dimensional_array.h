#pragma once

template<typename T>
class Two_dimensional_array
{
public:
	Two_dimensional_array(size_t cols_size, size_t rows_size);
	const int size();
	T* operator[](size_t index);
	T operator[](size_t index) const;
	~Two_dimensional_array();
private:
	T** two_dim_array;
	size_t rows_size;
	size_t cols_size;
};
