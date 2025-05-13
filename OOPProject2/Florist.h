#ifndef FLORIST_H
#define FLORIST_H

#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "FlowersBouquet.h"
#include "Person.h"

class Florist: Person {
private:
    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;

public:
    Florist(Wholesaler* w, FlowerArranger* fa, DeliveryPerson* dp)
        : wholesaler(w), flowerArranger(fa), deliveryPerson(dp) {
    }

    void acceptOrder(Person* recipient, std::vector<std::string> flowers);
};

#endif
#pragma once
