// Wholesaler.h
#ifndef WHOLESALER_H
#define WHOLESALER_H

#include "Person.h"
#include "Grower.h"
#include "FlowersBouquet.h"

class Wholesaler : public Person {
private:
    Grower* grower;
public:
    Wholesaler(std::string name, Grower* g);
    FlowersBouquet* acceptOrder(std::vector<std::string> flowers);
};

#endif
