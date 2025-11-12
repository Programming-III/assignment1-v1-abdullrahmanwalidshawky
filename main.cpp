
#include "Vistor.h"
#include "Enclosure.h"
#include "Bird.h"
#include "Mammal.h"
#include "Animal.h"
#include "Reptile.h"
#include <string>
#include <iostream>
using namespace std;
int main(){
	Animal aa[3];
	Enclosure enc (aa, 10, 5);
   Mammal m1("ji",3, false, "red");
   Bird b1("ant", 1, false, 1.33);
   Reptile r1("yuu", 2, true, false);
   Vistor v1("ahmed", 2);
   enc.displayAnimals();
   v1.displayAnimals();
}

