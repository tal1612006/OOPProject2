#include "Florist.h"
#include "Wholesaler.h"
#include <iostream>

Florist::Florist(Wholesaler* w, FlowerArranger* fa, DeliveryPerson* dp, std::string name) : Person(name) 
{

    this->wholesaler = w;
    this->flowerArranger = fa;
    this->deliveryPerson =dp;

}

void Florist::acceptOrder(Person* recipient, std::vector<std::string> flowers) {
    std::cout << "Florist "+getName() + " forwards request to Wholesaler "+ wholesaler->getName() + "." << std::endl;
    FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);
    std::cout << "Wholesaler "+wholesaler->getName() + " returns flowers to Florist "+getName() + "." << std::endl;

    std::cout << "Florist " + getName() + " request flowers arrangement from Flower Arranger "+ flowerArranger->getName()+"." << std::endl;
    flowerArranger->arrangeFlowers(bouquet);
    std::cout << "Flower Arranger " + flowerArranger->getName() + " returns arranged flowers to Florist " + getName() + "." << std::endl;


    std::cout << "Florist " + getName() + " forwards flowers to Delivery Person " + deliveryPerson->getName() + "." << std::endl;
    deliveryPerson->deliver(recipient, bouquet);
}
