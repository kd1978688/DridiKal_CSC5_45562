/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 17, 2017, 9:32 PM
 * Purpose:  This program will prompt the user to enter present 
 *           values, monthly interest, and number of month.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std; //Name-space under which system libraries exist

//User Libraries
//Function definition
float futureValue (float p, float i, int t)
{
//declare variable
float f;
f = p*pow(1+i,t);
return f;
}

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float p,i,f;
    int t;
    //Initialize variables
    cout <<"Enter the present value of account:\n";
    cin >> p;
    cout <<"Enter monthly interest rate:\n";
    cin >> i;
    cout <<"Enter number of months:\n";
    cin >> t;
    //call function to calculate future value
    f = futureValue (p,i,t);
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << fixed << showpoint << setprecision(2);
    cout <<"Future value after "<< t <<" months $ "<< f << endl;
    
    //Exit stage right!
    return 0;
}

