#include "gun.h"
#include <string>
#include <iostream>

gun::gun(std::string name, float damage, float weight) {
	this->name = name;
	this->damage = damage;
	this->weight = weight;
}
gun::~gun() {
	std::cout << "\n\n" << name << " delete object\n" << damage << " delete object\n" << weight << " delete object" << std::endl;
	std::cout << "___________________________________";

}
bool gun::weightGun(float weight) {
	std::cout << "Max weight gun = 100kg\n";
	std::cout << "you gun " << weight << "kg\n\n";
	return (MaxWeight > weight);
}
void gun::print() {
	std::cout << "\nname " << name << "\ndamage " << damage << "\nweight " << weight << std::endl;
	std::cout << "_________________________________" << std::endl;
}
float gun::allWeight(gun& other) {
	return  weight + other.weight;
}
float gun::allWeight(gun* other) {
	return this->weight + other->weight;
}
float gun::allWeight(float other) {
	return this->weight + other;
}
