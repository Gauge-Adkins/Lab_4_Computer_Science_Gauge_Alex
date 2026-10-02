// Lab_4_Computer_Science_Gauge_Alex.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Driver: Gauge
// Navigator: Alex
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <limits>

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
                std::string itemName;
            std::string sizeName;
            double price; 

            //CUSTOMER INPUTS
            std::cout << "Please select an item from the menu: " << std::endl;
            std::cin >> item;
            std::cout << "Please select a size: " << std::endl; 
            std::cin >> size;
            std::cout << std::endl;

            //CORRELLATING DATA TO A PRICE
            if ((item == 'a' || item == 'A') && size == '1') price = a1;
            if ((item == 'a' || item == 'A') && size == '2') price = a2;
            if ((item == 'a' || item == 'A') && size == '3') price = a3;
            if ((item == 'b' || item == 'B') && size == '1') price = b1;
            if ((item == 'b' || item == 'B') && size == '2') price = b2;
            if ((item == 'b' || item == 'B') && size == '3') price = b3;
            if ((item == 'c' || item == 'C') && size == '1') price = c1;
            if ((item == 'c' || item == 'C') && size == '2') price = c2;
            if ((item == 'c' || item == 'C') && size == '3') price = c3;
            if ((item == 'f' || item == 'F') && size == '1') price = f1;
            if ((item == 'f' || item == 'F') && size == '2') price = f2;
            if ((item == 'f' || item == 'F') && size == '3') price = f3;
        

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
            std::cout << std::left << std::setw(18) << std::setprecision(2) << std::fixed << price;
            std::cout << std::endl;
            std::cout << std::endl; 

            //QUANTITY
            int qty;
            std::cout << "How many would you like to order: ";
                std::cin >> qty;

            //MEMBERSHIP STATUS
                bool isMember;
                std::cout << "Are you a member with us? Please enter 1 for yes or 0 for no. ";
                std::cin >> isMember;
                std::cout << std::endl; 

                //PRICE FORMULA
                double gross = price * qty;
                double subtotal; 
                const double memberDiscount = (10.0 / 100);
                if (isMember)
                {
                    subtotal = (gross - (gross * memberDiscount));
                    std::cout << "Thank you for your continued patronage. Applying Loyalty discount.";
                }
                else 
                { subtotal = gross; }



                //RECEIPT HEADERS
                std::cout << std::endl; 
                std::cout << std::endl; 
                std::cout << std::right << std::setw(18) << "Item Quantity";
                std::cout << std::right << std::setw(18) << "Unit Price";
                std::cout << std::right << std::setw(18) << "Subtotal";

                //DISPLAYING THE RECEIPT
                std::cout << std::endl; 
                std::cout << std::right << std::setw(18) << qty;
                std::cout << std::right << std::setw(18) << price;
                std::cout << std::right << std::setw(18) << subtotal;
                std::cout << std::endl; 

                //DEFINING VARIABLES FOR TAXES
                const double arkansasStateTax = (6.5 / 100);
                const double faulknerCountyTax = (0.5 / 100);
                const double conwayMunicipalTax = (2.125 / 100);

                //CALCULATING TAXES PRE TIP 
                double stateTaxAmount = arkansasStateTax * subtotal;
                double countyTaxAmount = faulknerCountyTax * subtotal; 
                double cityTaxAmount = conwayMunicipalTax * subtotal;

                //COMBINED TAXES FOR CALCULATING TIPS
                double combinedTaxes = stateTaxAmount + countyTaxAmount + cityTaxAmount + subtotal; 

                //DDEFINING VARIABLES FOR TIPS
                const double tip15 = (15.0 / 100) * combinedTaxes;
                const double tip20 = (20.0 / 100) * combinedTaxes;
                const double tip25 = (25.0 / 100) * combinedTaxes; 
                
                
                    

                //TAXES AND TIPS DISPLAY
                std::cout << std::left << std::setw(18) << "Taxes and Tips" << std::endl; 
                std::cout << std::endl; 
                std::cout << std::left << std::setw(25) << "Arkansas State Tax:";
                std::cout << std::right << std::setw(18) << std::fixed << stateTaxAmount;
                std::cout << std::endl; 
                std::cout << std::left << std::setw(25) << "Faulkner County Tax:";
                std::cout << std::right << std::setw(18) << std::fixed << countyTaxAmount;
                std::cout << std::endl; 
                std::cout << std::left << std::setw(25) << "Conway Municipal Tax:";
                std::cout << std::right << std::setw(18) << std::fixed << cityTaxAmount;
                std::cout << std::endl; 
                std::cout << std::endl; 

                //TIP OUPUT
                std::cout << "Tips." << std::endl; 
                std::cout << "1.) 15%";
                        std::cout << std::right << std::setw(18) << std::fixed << tip15 << std::endl;
                        std::cout << "2.) 20%";
                    std::cout << std::right << std::setw(18) << std::fixed << tip20 << std::endl;
                    std::cout << "3.) 25%";
                    std::cout << std::right << std::setw(18) << std::fixed << tip25 << std::endl;
                std::cout << "4.) Other:" << std::endl; 
                std::cout << std::endl; 

                //WOULD YOU LIKE TO LEAVE A TIP?
                bool ifTip;
                    int tipInput;
                    double customTip; // initializing for if else statement
                    double total = combinedTaxes; //initializing for if else staement
                        double totalTip15 = tip15 + combinedTaxes;
                        double totalTip20 = tip20 + combinedTaxes;
                        double totalTip25 = tip25 + combinedTaxes;
                         
                        

                        std::cout << "Would you like to leave a tip? Please select 1 if yes and 0 if no."; 
                    std::cin >> ifTip;
                    if (ifTip) 
                    {
                        std::cout << "Please select your tip amount :";
                        std::cin >> tipInput;
                        if (tipInput == 1)
                        {
                            total = combinedTaxes + tip15;

                        }
                        else if (tipInput == 2)
                        {
                            total = combinedTaxes + tip20;
                        }

                        else if (tipInput == 3)
                        {
                            total = combinedTaxes + tip25;
                        }

                        else if (tipInput == 4)
                        {
                            
                            std::cout << "Please enter the tip amount." << std::endl;
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cin >> customTip;
                            
                                total = combinedTaxes + customTip;
                            
                        }
                        std::cout << std::endl; 
                        std::cout << "Total : " << total;
                    }
                    else {
                        std::cout << std::endl; 
                        std::cout << "Total: " << combinedTaxes;
                }
                    

 
                return 0;
}


