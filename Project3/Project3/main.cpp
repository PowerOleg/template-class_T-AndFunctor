#include <iostream>
#include <vector>
#include <algorithm>

class Get_sum
{
public:
	Get_sum()
	{
		this->sum = 0;
	}

	int operator()(int var)
	{
		this->sum += var;
		return sum;
	}
	friend std::ostream& operator<<(std::ostream& os, Get_sum& get_sum);
	
private:
	int sum;
};

std::ostream& operator<<(std::ostream& os, Get_sum& get_sum)
{
	return os << get_sum.sum;
}


int main(int argc, char** argv)
{
	auto vec = std::vector<int>{ 4, 1, 3, 6, 25, 54 };
	Get_sum result = std::for_each(vec.begin(), vec.end(), Get_sum());
	std::cout << result << std::endl;



	return 0;
}