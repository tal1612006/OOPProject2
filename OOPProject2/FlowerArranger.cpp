#include "FlowerArranger.h"
#include "Wholesaler.h"
#include "Grower.h"
#include <iostream>
#include "Person.h"

FlowerArranger::FlowerArranger(std::string name) : Person(name) {}
void FlowerArranger::arrangeFlowers(FlowersBouquet* bouquet) {
    std::cout << "Flower Arranger "+getName() + " arranges flowers." << std::endl;
    bouquet->arrange();
}
