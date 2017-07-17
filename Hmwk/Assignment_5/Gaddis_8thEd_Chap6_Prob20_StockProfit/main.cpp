/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 16, 2017, 10:46 PM
 * Purpose:  This is a function that accepts arguments to calculate 
 *           the profit from the sale of a stock. 
 *           This program should return the profit or loss. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double StockProfit (double, double, double, double, double);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double NS, SP, SC, PP, PC, profit;
    //Initialize variables
    
    //Input data
    cout <<"Enter the number of shares:\n";
    cin >> NS;
    cout <<"Enter the sale price per share:\n";
    cin >> SP;
    cout <<"Enter the purchase price per share:\n";
    cin >> PP;
    cout <<"Enter the purchase commission paid:\n";
    cin >> PC;
    cout <<"Enter the sale commission paid:\n";
    cin >> SC;
    //Function Call
    profit = StockProfit (NS,PP,PC,SP,SC);
    
    //Validation condition for profit or loss
    if (profit<0)
        cout <<"Loss on sale of stock is: "<< abs(profit) << endl;
    else
        cout <<"Profit on sale of stock is: " << profit << endl;
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
//Function Definition
double StockProfit (double NS, double PP, double PC, double SP, double SC)
{
    double profit;
    profit = ((NS*SP)-SC)-((NS*PP)+PC);
    return profit;
}

