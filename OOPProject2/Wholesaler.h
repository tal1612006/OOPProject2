#ifndef WHOLESALER_H
#define WHOLESALER_H

#include "Person.h"
#include "Grower.h"
#include "FlowersBouquet.h"

class Wholesaler : public Person {
private:
    Grower* grower;
public:
    Wholesaler(Grower* g, std::string name);
    FlowersBouquet* acceptOrder(std::vector<std::string> flowers);
};

#endif
