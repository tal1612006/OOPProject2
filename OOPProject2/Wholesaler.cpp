#include "Wholesaler.h"
#include "Grower.h"
#include "Person.h"
using namespace std;
#include <iostream>

Wholesaler::Wholesaler(Grower* g, std::string name) :Person(name) {
    this->grower = g;

}
FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers) {
    std::cout << "Wholesaler "+ getName() + " forwards the request to Grower "+grower->getName() + "." << std::endl;
    FlowersBouquet* b= grower->prepareOrder(flowers);
    std::cout << "Grower "+grower->getName() + " returns flowers to Wholesaler "+getName() + "." << std::endl;
    return b;
}
