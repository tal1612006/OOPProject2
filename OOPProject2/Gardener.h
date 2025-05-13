#ifndef GARDENER_H
#define GARDENER_H
#include "Person.h"
#include "FlowersBouquet.h"


class Gardener:public Person {
public:
    FlowersBouquet* prepareBouquet(std::vector<std::string> flowers);
};

#endif
