#include "Florist.h"

void Florist::acceptOrder(Person* recipient, std::vector<std::string> flowers) {
    std::cout << "Florist forwards the order to the wholesaler." << std::endl;
    FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);

    std::cout << "Florist receives flowers and sends them to the flower arranger." << std::endl;
    flowerArranger->arrangeFlowers(bouquet);

    std::cout << "Florist instructs the delivery person to deliver the bouquet." << std::endl;
    deliveryPerson->deliver(recipient, bouquet);
}
