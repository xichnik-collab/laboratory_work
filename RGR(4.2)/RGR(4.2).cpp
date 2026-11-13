#include <iostream>
#include <string>


class gun {
	std::string name;
	float damage;
	float weight;
	float MaxWeight = 100;
public:
	gun(std::string name, float damage, float weight) {
		this->name = name;
		this->damage = damage;
		this->weight = weight;
	}
	~gun() {
		std::cout<<"\n\n"<<name << " delete object\n" << damage << " delete object\n" << weight << " delete object"<<std::endl ;
		std::cout << "___________________________________";
		
	}
	bool weightGun(float weight) {
		std::cout << "Max weight gun = 100kg\n";
		std::cout << "you gun " << weight << "kg\n\n";
		return (MaxWeight > weight);
	}
	void print() {
		std::cout << "\nname " << name << "\ndamage " << damage << "\nweight " << weight << std::endl;
		std::cout << "_________________________________" << std::endl;
	}
	float allWeight(gun &other) {
		return  weight + other.weight ;
	}
	float allWeight(gun *other) {
		return this->weight + other->weight;
	}
	float allWeight(float other) {
		return this->weight + other;
	}
	
};

int main() {
	
	float weightGun = 25;
	gun Arsenal("aka 47", 33, weightGun);
	Arsenal.print();
	
	

	gun *patron = new gun("T-34",1999,100);
	patron->print();
	std::cout << std::boolalpha << Arsenal.weightGun(weightGun)<<'\n';
	std::cout << "value all weight " << Arsenal.allWeight(*patron);
	std::cout << "\nvalue all weight " << Arsenal.allWeight(patron);
	std::cout << "\nvalue all weight " << Arsenal.allWeight(23);
	std::cout << "\n______________________________________\n";
	
	delete patron;
	


}