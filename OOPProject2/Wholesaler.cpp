#include "Wholesaler.h"
using namespace std;

Wholesaler::Wholesaler(string name, Grower* grower) :Person(name) {
    this->grower = grower;

}
FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers) {
    std::cout << "Wholesaler places order to the grower." << std::endl;
    return grower->prepareOrder(flowers);
}
