#ifndef DELIVERY_PERSON_H
#define DELIVERY_PERSON_H

#include "FlowersBouquet.h"
#include "Person.h"

class DeliveryPerson : public Person{
public:
    DeliveryPerson(std::string name);

    void deliver(Person* recipient, FlowersBouquet* bouquet);
};

#endif
