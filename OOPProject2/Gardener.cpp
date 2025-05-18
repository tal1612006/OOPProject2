#include "Gardener.h"
#include "Wholesaler.h"
#include "Grower.h"
#include <iostream>
#include "Person.h"

Gardener::Gardener(std::string name) : Person(name) {}
FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers) {
    std::cout << "Gardener "+getName() + " prepares flowers." << std::endl;
    FlowersBouquet* b= new FlowersBouquet(flowers);

    return new FlowersBouquet(flowers);
}
