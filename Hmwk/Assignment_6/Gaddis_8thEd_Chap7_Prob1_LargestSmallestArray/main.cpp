/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 14, 2017, 11:32 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
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
    double arrayValue[10];
	for (int i = 0; i < 10; i++){
		std::cout << "Please enter a value." << std::endl;
		std::cin  >> arrayValue[i];
		}
	double largest = arrayValue[0];
	double smallest = arrayValue[0];
	for (int i = 0; i < 9; i++){
		if (largest <= arrayValue[i+1])
			largest = arrayValue[i+1];
		else if (smallest > arrayValue[i+1])
			smallest = arrayValue[i+1];	
		}
	std::cout << "The largest value in the array is: " << largest << std::endl;
	std::cout << "The smallest value in the array is: " << smallest << std::endl;
    //Declare variables
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

