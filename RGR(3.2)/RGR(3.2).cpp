#include <iostream>
#include <ctime>


void sumArr(int const &one, const int &end);
void sumNumber(int one, int two);
void diffeNumber(int one, int two);
void (*p_foo(char sign))(int, int);


int main() {
	srand(time(NULL));
	int const size = 5;
	int arr[size];
	for (int i = 0;i < size;++i) {
		arr[i] = rand() % 5;
		std::cout << arr[i]<<"\t";
	}
	std::cout << " value arr" << "\n";

	int const* p_one = arr;
	int const* p_end = arr+(size-1);

	 sumArr(* p_one, *p_end);
	 int one, two;
	 std::cout << " pls write two number for sum and dif" << std::endl;
	 std::cin >>  one >> two;
	 std::cout << "\n pls write '-' or '+' \n";
	 //sumNumber(one, two);
	 //diffeNumber(one, two);
	 char sign;
	 std::cin >> sign;
	
	 p_foo(sign)(one, two);//это вызов указателя нафункцию с входними параметрами

	 float *first = new float;
	 *first = 19,234;
	 std::cout << "\n adress_dynamic_pointer \n" << first << " value_dynamic_pointer = " << *first;
	 delete first;
	 std::cout << "\n adress_dynamic_pointer \n" << first << " value_dynamic_pointer = " << *first;
}



void sumArr(int const& one, const int& end) {

	std::cout << " one_adress = " << &one << "  " << " end_value = " << end<<"\n";
	int const * one_1 = &one;
	int sum = 0;
	for (one_1; one_1 <= &end; one_1++) {
		std::cout << *one_1 << "\t";
		sum += *one_1;
	}
	std::cout <<std::endl<< " SUM = "<<sum<<"\n";

	
}
void (*p_foo(char sign))(int,int) {
	switch (sign) {
	case'+':
		return sumNumber;
	case'-':
		return diffeNumber;
		break;
	}
}
void sumNumber(int one,int two) {
	int sum = one + two;
	std::cout << "\n"<<sum;
}
void diffeNumber(int one, int two) {
	int diffe = one - two;
	std::cout << "\n"<<diffe;
}



