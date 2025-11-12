

#ifndef BIRD_H_
#define BIRD_H_
#include <string>
#include "Animal.h"
using namespace std;
class Bird : public Animal{
private:
	float wingSpan;
public:
	Bird();
	Bird(string name, int age, bool isHungry,float wingSpan);
	virtual ~Bird();
};

#endif
