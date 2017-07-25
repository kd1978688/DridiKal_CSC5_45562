/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 24, 2017, 11:32 AM
 * Purpose:  This program uses the input of 12 months rainfall 
 *           and calculate the total rainfall.
 */

//System Libraries
#include <iostream>  //Input - Output Library
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
    double rainfall[12];
	double totalRainfall = 0;

	//Receive user input and calculates total rainfall for the year
	for (int i = 1; i < 13; i++) {
		std::cout << "Please enter the total rainfall for month " << i << ": ";
		std::cin >> rainfall[i - 1];

		//Input Validation: Values cannot be negative
		while (rainfall[i - 1] < 0) {
			std::cout << "Value cannot be negative. Try again." << std::endl;
			std::cin >> rainfall[i - 1];
		}
		//Running total of rainfall
		totalRainfall = totalRainfall + rainfall[i - 1];
	}
    //Declare variables
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

