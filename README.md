###Inside Functor:   int operator()(int var){...} <br />
friend std::ostream& operator<<(std::ostream& os, Get_sum& get_sum); <br />
To put the result in a stream:   std::ostream& operator<<(std::ostream& os, Get_sum& get_sum){return os << get_sum.sum;}