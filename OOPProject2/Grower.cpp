#include "Wholesaler.h"
#include <iostream>
#include "Person.h"

Wholesaler::Wholesaler(std::string name, Grower* g)
    : Person(name), grower(g) {
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers) {
    std::cout << name << " forwards the request to the Grower\n";
    return grower->prepareOrder(flowers);
}
