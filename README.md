###Inside Functor: class Get_sum{ int operator()(int var){...} }<br />
friend std::ostream& operator<<(std::ostream& os, Get_sum& get_sum); <br />
To put the result in a stream:   std::ostream& operator<<(std::ostream& os, Get_sum& get_sum){return os << get_sum.sum;} <br />
Inside main: Get_sum sum = std::for_each(vec.begin(), vec.end(), Get_sum()); <br />
std::cout << "[OUT]: get_sum() = " << sum << std::endl;