//Stadium Program
//Purpose: This program calculates the amount of income for the types of seat tickets sold in a stadium
//CPT-180-27
//Programmer: Zachary Murphy

#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	//declarations
	//constants 
	const double A_COST = 15.0;
	const double B_COST = 12.0;
	const double C_COST = 9.0;
	//variables to be calculated/inputed
	double aIncome, bIncome, cIncome, aSold, bSold, cSold;

	//intro output to user
	cout << "************************************************************\n";
	cout << "*\t\t Stadium Income Calculator" <<setw(19)<< "*\n";
	cout << "* You will enter the amount of tickets sold per seat class.*\n";
	cout << "* The income per seating class will then be displayed." <<setw(7) <<"*\n";
	cout << "************************************************************\n\n";

	//get info from the user
	//class a sold
	cout << "Please enter tickets solde for Class A Seats: ";
	cin >> aSold;
	//class b sold
	cout << "Please enter tickets solde for Class B Seats: ";
	cin >> bSold;
	//class c sold
	cout << "Please enter tickets solde for Class C Seats: ";
	cin >> cSold;

	//calculate the income for each class of seats
	aIncome = aSold * A_COST;
	bIncome = bSold * B_COST;
	cIncome = cSold * C_COST;

	//output to user
	cout << "************************************************************\n";
	cout << "\t\t Income per Seating Class Results:\n";
	cout << "Class A Income:" << setw(38) <<"$" << fixed << setprecision(2) << aIncome << "\n";
	cout << "Class B Income:" << setw(38) << "$" << fixed << setprecision(2) << bIncome << "\n";
	cout << "Class C Income:" << setw(38) << "$" << fixed << setprecision(2) << cIncome << "\n\n";
	cout << "************************************************************\n";

	//allow the user to exit
	cout << "Please press any key to exit...";
	_getch();
	return 0;
	


	

}