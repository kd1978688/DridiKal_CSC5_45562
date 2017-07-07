/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on June 10, 2017, 09:42 PM
 * Purpose:  Program that calculates
 *           The selling price of a circuit
 *           Board.
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
    double profit;
    double cost;
    double price;
    //Initialize variables
    cost = 14.95;
    //Input data
    profit = cost * 0.35;
    //Map inputs to outputs or process the data
    price = cost +profit;
    //Output the transformed data
    cout <<"Circuit Board Price  $"<<price<< endl;
    //Exit stage right!
    return 0;
}

