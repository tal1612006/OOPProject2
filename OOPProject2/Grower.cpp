#include "Wholesaler.h"
#include "Grower.h"
#include <iostream>
#include "Person.h"

Grower::Grower(Gardener* g, std::string name) : Person(name){
    this->gardener=g;
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> flowers) {
    std::cout << "Grower " +getName() + " forwards the request to Gardener "+ gardener->getName() + "." << std::endl;

    FlowersBouquet* b = gardener->prepareBouquet(flowers);
    std::cout << "Gardener " + gardener->getName() + " returns flowers to Grower " + getName() + "." << std::endl;
    return b;
}
