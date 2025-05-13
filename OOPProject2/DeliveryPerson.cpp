#include "DeliveryPerson.h"

void DeliveryPerson::deliver(Person* recipient, FlowersBouquet* bouquet) {
    std::cout << "Delivery person delivers the flowers to " << recipient->getName() << "." << std::endl;
    recipient->acceptFlowers(bouquet);
}
