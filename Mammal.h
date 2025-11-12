

#ifndef MAMMAL_H_
#define MAMMAL_H_
#include <string>
#include "Animal.h"
using namespace std;

class Mammal : public Animal {
private:
	string furColor;
public:
	Mammal();
	Mammal(string name, int age, bool isHungry, string furColor);

	virtual ~Mammal();

};

#endif
