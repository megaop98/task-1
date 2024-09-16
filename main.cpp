#include "house.h"

int main() {
    const int MAX_HOUSES = 100;  
    House available[MAX_HOUSES]; 
    int houseCount = 0;          
    char choice;

    do {
        if (houseCount >= MAX_HOUSES) {
            cout << "Maximum number of houses reached." << endl;
            break;
        }

      
        available[houseCount].readHouseData();
        houseCount++;

      
        cout << "Enter another house? (Y/N): ";
        cin >> choice;
        cin.ignore(); 

    } while (choice == 'Y' || choice == 'y');

   
    cout << "\nOwner\tAddress\t\tBedrooms\tPrice" << endl;
    for (int i = 0; i < houseCount; i++) {
        available[i].displayHouseData();
    }

    return 0;
}
