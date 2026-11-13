#pragma once
#include <string>
class gun
{
	std::string name;
	float damage;
	float weight;
	float MaxWeight = 100;
public:
	gun(std::string name, float damage, float weight);
	~gun();
	bool weightGun(float weight);
	void print();
	float allWeight(gun& other);
	float allWeight(gun* other);
	float allWeight(float other);
};

