#pragma once

template<typename T>
class two_dimensional_array
{
public:
	two_dimensional_array(int cols_size, int rows_size);
	const int size();
	void add(T element);
	T* operator[](T element);
	const T* operator[](T element);
	void delete_all(int size);
	~two_dimensional_array();
private:
	T two_dim_array;
	int rows_size;
	int cols_size;
};

//* cout << table[i][j]; * table[i][j] = value;.