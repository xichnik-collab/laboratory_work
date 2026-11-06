#include <iostream>
#include <string>

class gun {
private:
	std::string name;
	float damage;
	float weight;
public:
	gun(std::string name, float damage, float weight) {
		this->name = name;
		this->damage = damage;
		this->weight = weight;
	}
	gun() : gun("PM",10,5) {

	}
	void print() {
		std::cout << " name " << name << "\n damage " << damage << "\n weight " << weight<< std::endl;
		std::cout << "_________________________________" << std::endl;
	}

	
};


int main() {
	gun Arsenal("aka 47", 20, 33);
	gun ars;
	Arsenal.print();
	ars.print();


}