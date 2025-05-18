#include "Person.h"
#include "Florist.h"
#include "Grower.h"
#include "Wholesaler.h"
#include <iostream>
#include <string>

Person::Person(std::string name) : name(name) { this->name = name; }

void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers)  {  
    std::cout << name + " orders flowers to " + recipient->getName() + " from Florist " + florist->getName() + ": ";
        for (size_t i = 0; i < flowers.size(); ++i) {
            std::cout << flowers[i];
            if (i < flowers.size() - 1) {
                std::cout << ", ";
            }
        }
    std::cout << ".";
    std::cout << std::endl; 
	florist->acceptOrder(recipient, flowers); 
}
void Person::acceptFlowers(FlowersBouquet* bouquet) {
	std::cout << name+" accepts the flowers: ";
    for (size_t i = 0; i < bouquet->getFlowers().size(); ++i) {
        std::cout << bouquet->getFlowers()[i];
        if (i < bouquet->getFlowers().size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << ".";
    std::cout << std::endl;
    delete bouquet;
}
std::string Person::getName() { return name; }
