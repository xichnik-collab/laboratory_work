#include <iostream>
#include <string>
#include "gun.h"

int main() {

	float weightGun = 25;
	gun Arsenal("aka 47", 33, weightGun);
	Arsenal.print();



	gun* patron = new gun("T-34", 1999, 100);
	patron->print();
	std::cout << std::boolalpha << Arsenal.weightGun(weightGun) << '\n';
	std::cout << "value all weight " << Arsenal.allWeight(*patron);
	std::cout << "\nvalue all weight " << Arsenal.allWeight(patron);
	std::cout << "\nvalue all weight " << Arsenal.allWeight(23);
	std::cout << "\n______________________________________\n";

	delete patron;



}