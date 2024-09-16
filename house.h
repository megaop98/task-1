#include <iostream>
#include <string>

using namespace std;

class House {
private:
    string owner;
    string address;
    int bedrooms;
    float price;

public:
   
    House();

    
    void readHouseData();

    
    void displayHouseData() const;
};
