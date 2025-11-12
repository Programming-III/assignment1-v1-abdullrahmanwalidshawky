

#ifndef REPTILE_H_
#define REPTILE_H_
#include <string>
#include "Animal.h"
using namespace std;

class Reptile : public Animal {
private:
	bool isVenomous;
public:
	Reptile();
	Reptile(string name, int age, bool isHungry, bool isVenomous);
	virtual ~Reptile();
};

#endif /* REPTILE_H_ */
