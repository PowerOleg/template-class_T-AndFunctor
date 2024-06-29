#include <iostream>
#include <vector>
#include <algorithm>

class Counter
{
public:
	Counter()
	{
		this->sum = 0;
	}

	int operator()(int var)
	{
		this->sum += var;
		if (var % 3 == 0)
		{
			count++;
		}
		return sum;
	}
	int get_count()
	{
		return this->count;
	}
	friend std::ostream& operator<<(std::ostream& os, Counter& get_sum);
	
private:
	int sum;
	int count;
};

std::ostream& operator<<(std::ostream& os, Counter& get_sum)
{
	return os << get_sum.sum;
}

/*std::ostream& operator<<(std::ostream& os, Counter& get_count)
{
	return os << get_count.count;
}*/

int main(int argc, char** argv)
{
	std::vector<int> numbers = { 4, 1, 3, 6, 25, 54 };
	Counter counter = std::for_each(numbers.begin(), numbers.end(), Counter());
	std::cout << "[OUT]: get_sum() = " << counter << std::endl;
	std::cout << "[OUT]: get_count() = " << counter.get_count() << std::endl;
	return 0;
}