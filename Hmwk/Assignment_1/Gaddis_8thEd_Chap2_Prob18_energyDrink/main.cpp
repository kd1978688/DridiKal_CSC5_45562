/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on June 20, 2017, 11:03 PM
 * Purpose:  Program intended to calculate some 
 *           statistics of consumption of energy 
 *           drinks.
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
    double energy_drink_customers;
    double one_or_more_drink, citrus_flavor;
    
    //Initialize variables
    energy_drink_customers = 16500;
    //Input data
    one_or_more_drink = energy_drink_customers * 0.15;
    citrus_flavor = one_or_more_drink * 0.58;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout <<"approximate of customers who buy one or more energy drink: ";
    cout << one_or_more_drink << endl;
    cout <<"citrus flavor customers: "<< citrus_flavor << endl;
    //Exit stage right!
    return 0;
}

