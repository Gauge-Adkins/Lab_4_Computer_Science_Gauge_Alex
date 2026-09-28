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


            //PRICES FOR FOOD
            double a1 = 2.50, //APPLES SMALL MEDIUM LARGE
                a2 = 3.50,
                a3 = 4.50;
            double b1 = 3.00, //BUFFALO WINGS SMALL MEDIUM LARGE
                b2 = 4.00,
                b3 = 5.00;
            double c1 = 0.50, //CHERRY COKE SMALL MEDIUM LARGE
                c2 = 1.00,
                c3 = 1.50;
            double f1 = 0.25, //FLAT WHITE SMALL MEDIUM LARGE
                f2 = 0.50,
                f3 = 0.75;



          

        //SETTING UP NUMBERS FOR DECIMAL ALIGNMENT


        //CREATING THE MENU
            std::cout << std::left << std::setw(18) << "Food/Drink";
            std::cout << std::left << std::setw(18) << "Small (1)";
            std::cout << std::left << std::setw(18) << "Medium (2)";
            std::cout << std::left << std::setw(18) << "Large (3)" << std::endl;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << "A. Apple";
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << a1;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << a2;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << a3 << std::endl;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << "B. Buffalo Wings";
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << b1;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << b2;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << b3 << std::endl;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << "C. Cherry Coke";
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << c1;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << c2;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << c3 << std::endl;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << "F. Flat White";
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << f1;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << f2;
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << f3 << std::endl;
            std::cout << std::endl;

            //DEFINING VALUES FOR CUSTOMER RESPONSES
            char item,
                size;
            double subtotal;
            std::string itemName;
            std::string sizeName;

            //CUSTOMER INPUTS
            std::cout << "Please select an item from the menu: " << std::endl;
            std::cin >> item;
            std::cout << "Please select a size: " << std::endl; 
            std::cin >> size;
            std::cout << std::endl;

            //CORRELLATING DATA TO A PRICE
            if (item == 'a', size == '1') subtotal = a1; 
            if (item == 'a', size == '2') subtotal = a2;
            if (item == 'a', size == '3') subtotal = a3;
            if (item == 'b', size == '1') subtotal = b1;
            if (item == 'b', size == '2') subtotal = b2;
            if (item == 'b', size == '3') subtotal = b3;
            if (item == 'c', size == '1') subtotal = c1;
            if (item == 'c', size == '2') subtotal = c2;
            if (item == 'c', size == '3') subtotal = c3;
            if (item == 'f', size == '1') subtotal = f1;
            if (item == 'f', size == '2') subtotal = f2;
            if (item == 'f', size == '3') subtotal = f3;
            
            // DEFINEING THE DISPLAYS
            if (item == 'a') itemName = "Apples";
            if (item == 'b') itemName = "Buffalo Wings";
            if (item == 'c') itemName = "Cherry Coke";
            if (item == 'f') itemName = "Flat White";

            if (size == '1') sizeName = "Small";
            if (size == '2') sizeName = "Medium";
            if (size == '3') sizeName = "Large";

            //DISPLAYING THE ORDER
            std::cout << std::left << std::setw(18) << itemName;
            std::cout << std::left << std::setw(18) << sizeName;
            std::cout << std::left << std::setw(18) << subtotal;






            
 
}


