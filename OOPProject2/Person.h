#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "FlowersBouquet.h"

class Florist;
class Person {
protected:
    std::string name;
public:
    Person(std::string name);
    virtual ~Person() = default;
    virtual void orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers);
    virtual void acceptFlowers(FlowersBouquet* bouquet);
    std::string getName();
};

#endif
