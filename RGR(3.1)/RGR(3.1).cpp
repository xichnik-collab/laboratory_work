#include <iostream>

int main() {
	int variable = 10;
	int* p_variable = &variable;
	std::cout << "address var : " << p_variable << " value var : " << *p_variable << std::endl;

	*p_variable = 30;
	std::cout << " value var : " << variable << std::endl;

	int const size = 4;
	int arr[size]{ 1,2,3,4 };
	int* p_arr = arr;
	std::cout << " arr: ";
	for (int i = 0;i < size;i++) {
		std::cout << p_arr[i];
	}
	std::cout << std::endl;


	int valueConst = 5;
	int* const p = &valueConst;

	std::cout << p << "\t " << *p << "\t " << valueConst << "\n";

	*p = 20;
	//p = arr; возникает ошибка, так как мы зафиксировали указатель на определенном адресе
	std::cout << p << "\t " << *p << "\t " << valueConst;
}

