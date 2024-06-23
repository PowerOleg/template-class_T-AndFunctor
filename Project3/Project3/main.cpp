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



class Get_count
{
public:
	Get_count()
	{
		this->count = 0;
	}

	void operator()(int var)
	{
		if (var % 3 == 0)
		{
			count++;
		}
	}
	friend std::ostream& operator<<(std::ostream& os, Get_count& get_count);

private:
	int count;
};

std::ostream& operator<<(std::ostream& os, Get_count& get_count)
{
	return os << get_count.count;
}

int main(int argc, char** argv)
{
	auto vec = std::vector<int>{ 4, 1, 3, 6, 25, 54 };
	Get_sum sum = std::for_each(vec.begin(), vec.end(), Get_sum());
	std::cout << "[OUT]: get_sum() = " << sum << std::endl;

	Get_count count = std::for_each(vec.begin(), vec.end(), Get_count());
	std::cout << "[OUT]: get_count() = " << count << std::endl;

	return 0;
}