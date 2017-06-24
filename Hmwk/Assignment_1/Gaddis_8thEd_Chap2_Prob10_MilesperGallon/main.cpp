/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on June 16, 2017, 8:32 PM
 * Purpose:  Program to calculate
 *           Miles per Gallon for a vehicle 
 *           that holds 15 Gallons.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double mpg;
    double miles_driven;
    double Gallons_gas_used;
    
    //Initialize variables
    miles_driven = 375;
    Gallons_gas_used = 15;  
    
    //Input data
    
    //Map inputs to outputs or process the data
    mpg = miles_driven/Gallons_gas_used;
    //Output the transformed data
    cout <<"MPG = "<<mpg<< endl;
    //Exit stage right!
    return 0;
}

