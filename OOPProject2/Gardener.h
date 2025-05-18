#ifndef GARDENER_H
#define GARDENER_H
#include "Person.h"
#include "FlowersBouquet.h"
#include <string>

class Gardener:public Person {
public:
    Gardener(std::string name);

    FlowersBouquet* prepareBouquet(std::vector<std::string> flowers);
};

#endif
