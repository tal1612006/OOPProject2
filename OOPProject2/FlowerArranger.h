#ifndef FLOWER_ARRANGER_H
#define FLOWER_ARRANGER_H


#include "Person.h"
#include "FlowersBouquet.h"

class FlowerArranger:public Person {
public:
    void arrangeFlowers(FlowersBouquet* bouquet);
};

#endif
