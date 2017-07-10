/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 6, 2017, 2:32 PM
 * Purpose:  This program asks to enter the number of coins
 *           to total a dollar. checks the total and send a 
 *           message back.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float p_value = 0.01, n_value = 0.05;
const float d_value = 0.1, q_value = 0.25;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float pennies, nickels, dimes, quaters;
    float amount;
    float p_cost, n_cost, d_cost, q_cost;
    float dollar;
    
    //Initialize variables
    dollar = 1.00;
    
    //Input data
    cout <<"Enter the number of Pennies:\n";
    cin >> pennies;
    cout <<"Enter the number of Nickels:\n";
    cin >> nickels;
    cout <<"Enter the number of Dimes:\n";
    cin >> dimes;
    cout <<"Enter the number of Quaters:\n";
    cin >> quaters;
    
    //Map inputs to outputs or process the data
    //Calculate individual values of coins
    p_cost = pennies * p_value;
    n_cost = nickels * n_value;
    d_cost = dimes * d_value;
    q_cost = quaters * q_value;
    
    //Calculate the amount of total coins
    amount = p_cost+n_cost+d_cost+q_cost;
    
    
    //Check the value of the amount
    if (amount == dollar)
    {
        cout << fixed << showpoint << setprecision(2);
        cout <<"Congratulations!! you are a Winner!!. Total Amount is = $ ";
        cout << amount << endl;
            
    }
    else if (amount > dollar)
    {
        cout << fixed << showpoint << setprecision(2);
        cout <<"Sorry!! Game Over! you entered an amount more than $ 1.00\n";
    }
    else
    {
        cout <<"Sorry!! Game Over! you entered an amount less than $ 1.00\n";
    }
    
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

