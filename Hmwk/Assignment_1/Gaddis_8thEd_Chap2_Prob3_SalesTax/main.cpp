/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on June 16, 2017, 06:52 PM
 * Purpose:  Code to be utilized in calculating
 *           sales tax on a $95 purchase.
 *           
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
    double price, state_sales_tax, county_sales_tax;
    double total_sales_tax;
    //Initialize variables
    price = 95;
    //Input data
    state_sales_tax = price * 0.04;
    county_sales_tax = price * 0.02;
    //Map inputs to outputs or process the data
    total_sales_tax = state_sales_tax + county_sales_tax;
    //Output the transformed data
    cout << "Sales Tax = $"<< total_sales_tax <<endl;
    //Exit stage right!
    return 0;
}

