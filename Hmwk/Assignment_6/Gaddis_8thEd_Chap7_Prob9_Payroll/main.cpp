/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 24, 2017, 10:32 PM
 * Purpose:  This program uses given arrays to relay data 
 *           in payroll
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <cctype>
#include <ctime>
#include <cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    long int empID[] = { 5658845,4520125,7895122,8777541,8451277,1302850,7580489 };
	int hours[7];
	double payRate[7], wages[7];

	//Gathering hours for each respective employee ID
	for (int i = 0; i < 7; i++) {
		std::cout << "Enter the hours worked for Employee " << empID[i] << ": ";
		std::cin >> hours[i];

		//Input Validation: Hours cannot be negative
		while (hours[i] < 0) {
			std::cout << "Value cannot be negative. Try again." << std::endl;
			std::cin >> hours[i];
		}

		//Gathering pay rates for each respective employee ID
		std::cout << "Enter the pay rate for Employee " << empID[i] << ": ";
		std::cin >> payRate[i];

		//Input Validation: Pay rate cannot be less than 15.00
		while (payRate[i] < 15.00) {
			std::cout << "Value cannot be less than 15.00. Try again." << std::endl;
			std::cin >> payRate[i];
		}

		//Calculate wages for each respective employee and store into an array
		wages[i] = hours[i] * payRate[i];
	}

	for (int i = 0; i < 7; i++) {
		std::cout << "The gross wages for Employee " << empID[i] << " are: $" << wages[i] << std::endl;
	}

    
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

