//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Program: The purpose of this program is to calculates the ticket sales, expenses allocated, and 
//          the amount profited from the game
// Process:	Obtain input from user: upper and lower deck tickets that were sold.
// Results:	Display the ticket sales, expenses, and profits.
//
// Class:	    CS2010
// Section:	  	1004
// Term/Year:	Fall 2026  
// Author:      Jonathan Cales
// 
// Reflection: I think everything for this program went decently well, but I can definitely
// see how the program can be improved in some functionality - such as reading back the input to
// the user and asking them to confirm it is correct before continuing and allowing them to indicate
// if a mistake was made through an if-then statement to repeat or re-enter their information.
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Includes libraries & namespace std
//
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){ 
	
	// Ask for the date for documentation purposes.
	string date;

	// Define all prices of tickets as variables. These will not change.
	const double standardTix = 74.99;
	const double premiumTix = 78.99;
	const double deluxeTix = 99.99;

	// Set brand names/aliases for our ticket classes.
	string standardAlias = "Good Any Day";
	string premiumAlias = "Ticket w/ All Day Dining";
	string deluxeAlias = "Ticket w/ All Day Dining & Drinks";

	// Define the amount of tickets sold as variables. These will change based on user input.
	int amountOfStandardTix;
	int amountOfPremiumTix;
	int amountOfDeluxeTix;

	// Adding variables for individual ticket sales for clarity in later calculations.
	double salesFromStandard;
	double salesFromPremium;
	double salesFromDeluxe;

	// Define the sales statistics as variables to update as calculations are made.
	// Vendor's cut will NOT update. They receive 1.8% of all sales with premium and deluxe tickets.
	double grossSales;
	const double CEDARPOINT_VENDOR_CUT = 0.018;
	double vendorExpenses;
	double netProfit;

	// Ask for information used to calculate the date. 
	cout << "Enter the date (MM/DD/YYYY): ";
	cin >> date;

	// Begin input of sales info for the current date.
	cout << "Please enter the following information in accordance with today's sales: " << endl;
	cout << "How many " << standardAlias << " tickets were sold? ";
	cin >> amountOfStandardTix;
	cout << "How many " << premiumAlias << " tickets were sold? ";
	cin >> amountOfPremiumTix;
	cout << "How many " << deluxeAlias << " tickets were sold? ";
	cin >> amountOfDeluxeTix;

	// Run all sales calculations before display.
	salesFromStandard = amountOfStandardTix * standardTix;
	salesFromPremium = amountOfPremiumTix * premiumTix;	
	salesFromDeluxe = amountOfDeluxeTix * deluxeTix;

	// Calculate the gross sales, vendor expenses, and net profit.
	grossSales = salesFromStandard + salesFromPremium + salesFromDeluxe;
	vendorExpenses = grossSales * CEDARPOINT_VENDOR_CUT;
	netProfit = grossSales - vendorExpenses;

	// Display the results of the day to the user.
	cout << "Gross Ticket Sales for" << date << ": $" << fixed << setprecision(2) << grossSales << endl;
	cout << "Cedar Point Net Profit" << ": $" << fixed << setprecision(2) << netProfit << endl;
	cout << "Amount Paid to Vendors" << ": $" << fixed << setprecision(2) << vendorExpenses << endl;
	
	return 0;
}
