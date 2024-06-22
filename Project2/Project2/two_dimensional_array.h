#pragma once

template<typename T>
class Two_dimensional_array
{
public:
	Two_dimensional_array(int cols_size, int rows_size);
	const int size();
	void add(T element);
	T* operator[](T index);
	T operator[](T index) const;
	void delete_all(int rows_size);
	~Two_dimensional_array();
private:
	T** two_dim_array;
	int rows_size;
	int cols_size;
};
