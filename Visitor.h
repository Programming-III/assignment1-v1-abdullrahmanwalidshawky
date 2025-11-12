

#ifndef VISTOR_H_
#define VISTOR_H_
#include <string>
using namespace std;

class Vistor {
private:
	string visitorName;
	int ticketsBought;
public:
	Vistor();
	Vistor(string visitorName, int ticketsBought);
	virtual ~Vistor();
	virtual void displayAnimals();
};

#endif /* VISTOR_H_ */

