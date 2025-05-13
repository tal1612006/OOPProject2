#ifndef DELIVERY_PERSON_H
#define DELIVERY_PERSON_H

#include "FlowersBouquet.h"
#include "Person.h"

class DeliveryPerson {
public:
    void deliver(Person* recipient, FlowersBouquet* bouquet);
};

#endif
