#ifndef FLOWERSBOUQUET_H
#define FLOWERSBOUQUET_H

#include <vector>
#include <string>

class FlowersBouquet {
private:
    std::vector<std::string> flowers;
    bool arranged;
public:
    FlowersBouquet(std::vector<std::string> flowers);
    void arrange();
    bool isArranged();
    std::vector<std::string>& getFlowers();
};

#endif 
