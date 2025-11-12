

#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <string>
using namespace std;

class Animal {
private:
	string name;
	int age;
	bool isHungry;
public:
	Animal();
	Animal(string name, int age, bool isHungry);
	virtual ~Animal();
	virtual void display();
	virtual void feed();
};

#endif
