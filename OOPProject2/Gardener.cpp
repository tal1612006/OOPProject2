#include "Gardener.h"

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers) {
    std::cout << "Gardener prepares the bouquet." << std::endl;
    return new FlowersBouquet(flowers);
}
