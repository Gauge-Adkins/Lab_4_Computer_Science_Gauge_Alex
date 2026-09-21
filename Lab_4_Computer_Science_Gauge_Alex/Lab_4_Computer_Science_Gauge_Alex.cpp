// Lab_4_Computer_Science_Gauge_Alex.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Driver: Gauge
// Navigator: Alex
//

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    //INPUT REQUIREMENTS
    std::string foodName;
    char itemCode;
    int itemQuantity;
    double unitPrice;
        bool isMember;

        //SETTING UP NUMBERS FOR DECIMAL ALIGNMENT
        

        //SETTING UP INPUTS
        std::cout << "Enter food name: ";
        std::getline(std::cin, foodName);
        std::cout << "Enter item code:";
        std::cin >> itemCode;
        std::cout << "Enter Item Quantity:";
        std::cin >> itemQuantity;
        std::cout << "Enter Unit Price:";
        std::cin >> unitPrice;
        std::cout << "Is Customer a member?";
        std::cin >> isMember;
        std::cout << std::endl;
        std::cout << std::endl;

        //GENERATOR HEADERS
        std::cout << std::left << std::setw(18) << "Food Name";
        std::cout << std::left << std::setw(18) << "Item Code";
        std::cout << std::right << std::setw(18) << "Item Quantity";
        std::cout << std::right << std::setw(18) << "Unit Price";
        std::cout << std::right << std::setw(18) << "Is Member?" << std::endl;

        //GENERATOR OUTPUT
        std::cout << std::left << std::setw(18) << foodName;
        std::cout << std::left << std::setw(18) << itemCode;
        std::cout << std::right << std::setw(18) << itemQuantity;
        std::cout << std::right << std::setw(18) << unitPrice;
        std::cout << std::right << std::setw(18) << isMember;




        
}


