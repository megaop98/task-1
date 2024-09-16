#include "house.h"


House::House() : owner(""), address(""), bedrooms(0), price(0.0f) {}


void House::readHouseData() {
    cout << "Enter Owner: ";
    getline(cin, owner);

    cout << "Enter Address: ";
    getline(cin, address);

    cout << "Number of Bedrooms? : ";
    cin >> bedrooms;

    cout << "Price: ";
    cin >> price;

   
    cin.ignore();
}


void House::displayHouseData() const {
    cout << owner << "\t" << address << "\t" << bedrooms << "\t" << price << endl;
}
