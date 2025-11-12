

#ifndef ENCLOSURE_H_
#define ENCLOSURE_H_
#include "Animal.h"
#include <string>
using namespace std;

class Enclosure {
private:
	Animal* arr;
	int capacity;
	int currentCount;

public:
	Enclosure();
	Enclosure(Animal* arr, int capacity, int currentCount);
	virtual ~Enclosure();
	void addAnimal(Animal* a);
	virtual void displayAnimals();
};

#endif /* ENCLOSURE_H_ */
