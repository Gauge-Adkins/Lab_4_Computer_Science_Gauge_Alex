// Lab_4_Computer_Science_Gauge_Alex.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Driver: Gauge
// Navigator: Alex
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

int main()
{
    //INPUT REQUIREMENTS RECEIPT
    std::string foodName;
    std::string cashierNotes;
    char itemCode;
    int itemQuantity;
    double unitPrice;
    double subtotal;
    double gross; 
        bool isMember;
        const double  salesTax = 6.5 / 100; // Arkansas Sales Tax
            const double memberDiscount = 10.0 / 100; // MEMBER DISCOUNT
            double tax; 
            double grandTotal;

            //INPUT REQUIREMENTS INVENTORY TABLE
            std::string itemName;
            char inventoryCode;
            int itemQty;
        

        //SETTING UP NUMBERS FOR DECIMAL ALIGNMENT
        

        //SETTING UP INPUTS
        std::cout << "Enter food name: ";
        std::getline(std::cin, foodName);
        std::cout << "Enter item code: ";
        std::cin >> itemCode;
        std::cout << "Enter Item Quantity: ";
        std::cin >> itemQuantity;
        std::cout << "Enter Unit Price: ";
        std::cin >> unitPrice;
        std::cout << "Is Customer a member? ";
        std::cin >> isMember;
        std::cout << std::endl;
        std::cout << std::endl;

        //GROSS CALCULATIONS
        gross = itemQuantity * unitPrice;

        //MEMBER DISCOUNT CALCULATIONS
        if (isMember) { subtotal = gross - (gross * memberDiscount); }
        else { // PRICE IF CUSTOMER IS A MEMBER
            subtotal = gross; //PRICE FOR NON MEMBER
        }

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
        // CALCULATEING SUBTOTAL
        std::cout << std::setw(18)<< std::right  << std::setprecision(2) << std::fixed << gross;
        std::cin.ignore();
        std::cout << std::setw(18) <<std::right << isMember;
        std::cout << std::endl; 
        std::cout << std::endl; 

        // CALCULATING MEMBER DISCOUNT
        
        std::cout << std::setw(18) << std::left << "Subtotal: " << std::setprecision(2) << std::fixed << subtotal << std::endl; 

        // CALCULATING TAX
        tax = subtotal * salesTax;
        std::cout << std::setw(18) << std::left << "Tax: " << std::setprecision(2) << std::fixed << tax << std::endl; 

        //CALCULATING GRAND TOTAL
        grandTotal = subtotal + tax;
            std::cout << std::setw(18) << std::left << "Grand Total: " << std::setprecision(2) << std::fixed << grandTotal << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;

            //CASHIER NOTES HEADER
            std::cout << "CASHIER NOTES" << std::endl; 
            std::getline(std::cin, cashierNotes);
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
           

            /* CREATING INVENTORY 
            
            __________________________________*/

            // GATHERING THE INVENTORY INPUTS
            std::cout << "Please enter the item name: ";
        std:getline(std::cin, itemName);
            std::cout << "Please enter the inventory code: ";
            std::cin >> inventoryCode;
            std::cout << "Please enter the remaining item quantity: ";
            std::cin >> itemQty;
                std::cout << std::endl;

            //GENERATING INVENTORY HEADERS
            std::cout << std::left << std::setw(18) << "Item Name";
            std::cout << std::left << std::setw(18) << "Inventory Code";
            std::cout << std::left << std::setw(18) << "Remaining Inventory" << std::endl; 

            //DISPLAYING INVENTORY RESULTS
            std::cout << std::left << std::setw(18) << itemName;
            std::cout << std::left << std::setw(18) << inventoryCode;
            std::cout << std::left << std::setw(18) << itemQty;

            return 0; 
}


