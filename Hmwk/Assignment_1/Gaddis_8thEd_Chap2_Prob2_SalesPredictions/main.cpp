/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on June 21, 2017, 10:28 PM
 * Purpose:  Program to predict sales of a computers.
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
    double sales;
    double east_coast_sales;
    
    //Initialize variables
    sales = 8.6;
    //Input data
    east_coast_sales = 8.6 * 0.58;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout <<"East Coast Sales: $"<<east_coast_sales<<" million."<< endl;
    //Exit stage right!
    return 0;
}

