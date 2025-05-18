// OOPProject2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Wholesaler.h"
#include "Person.h"
#include "Florist.h"
#include "Wholesaler.h"
#include "Grower.h"
#include "Gardener.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include <vector>
#include <string>

int main() {
    Gardener gardener("Garett");
    Grower grower( &gardener, "Gray" );
    Wholesaler wholesaler( &grower, "Watson");
    FlowerArranger arranger("Flora");
    DeliveryPerson delivery("Dylan");
    Florist florist( &wholesaler, &arranger, &delivery, "Fred");

    Person sender("Chris");
    Person recipient("Robin");

    std::vector<std::string> flowers = { "Roses", "Violets", "Gladiolus" };
    sender.orderFlowers(&florist, &recipient, flowers);

    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
