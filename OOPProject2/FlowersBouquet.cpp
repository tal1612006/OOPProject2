#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> flowers)
    : flowers(flowers), arranged(false) {
}

void FlowersBouquet::arrange() {
    arranged = true;
}

bool FlowersBouquet::isArranged() const {
    return arranged;
}

const std::vector<std::string>& FlowersBouquet::getFlowers() const {
    return flowers;
}
