/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 6, 2017, 3:39 PM
 * Purpose:  This program asks for the number of units sold 
 *           compute the total cost of the purchase. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float cost = 99;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int unit;           //Number of units sold
    float tot_cost;     //Total amount of sold units 
    float amount;
    
    //Initialize variables
    
    //Input data
    cout <<"Enter the quantity of Units:" << endl;
    cin >> unit;
        //Validation of input
    if (unit <=0)
    {
        cout <<"Invalid Input! R-enter units:\n";
        cin >> unit;
    }
    
    //Map inputs to outputs or process the data
    
    
    //Output the transformed data
    if (unit < 10)
        tot_cost = cost;
    else if (unit < 20)
        tot_cost = cost * 0.2;
    else if (unit < 50)
        tot_cost = cost * 0.3;
    else if (unit < 100)
        tot_cost = cost * 0.4;
    else 
        tot_cost = cost * 0.5;
    //Display the total purchase amount
    amount = tot_cost * unit;
    cout << fixed << showpoint << setprecision(2);
    cout <<"Total Purchase Amount $ " << amount << endl;
        
    
    //Exit stage right!
    return 0;
}

