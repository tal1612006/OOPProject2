#ifndef GROWER_H
#define GROWER_H
#include "Person.h"
#include "Gardener.h"
#include "FlowersBouquet.h"

class Grower:public Person {
private:
    Gardener* gardener;

public:
    Grower(Gardener* g) : gardener(g) {}

    FlowersBouquet* prepareOrder(std::vector<std::string> flowers);
};

#endif
