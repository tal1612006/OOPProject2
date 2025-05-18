#include "DeliveryPerson.h"
#include <iostream>
#include "Person.h"

DeliveryPerson::DeliveryPerson(std::string name) : Person(name) {}

void DeliveryPerson::deliver(Person* recipient, FlowersBouquet* bouquet) {
    std::cout << "Delivery Person "+getName() + " delivers flowers "+recipient->getName() + "." << std::endl;
    recipient->acceptFlowers(bouquet);
}
