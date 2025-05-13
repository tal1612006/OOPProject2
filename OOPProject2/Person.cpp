#include "Person.h"
#include "Florist.h"
#include <iostream>

Person::Person(std::string name) : name(name) { this->name = name; }

void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers)  {  florist->acceptOrder(recipient, flowers); }
void Person::acceptFlowers(FlowersBouquet* bouquet) {}
