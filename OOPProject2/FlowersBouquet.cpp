#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> flowers) {
    this->flowers = flowers;
    this->arranged=false;
}

void FlowersBouquet::arrange() {
    arranged = true;
}

bool FlowersBouquet::isArranged()  {
    return arranged;
}

 std::vector<std::string>& FlowersBouquet::getFlowers()  {
    return flowers;
}
