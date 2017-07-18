/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 17, 2017, 10:05 PM
 * Purpose:  This program determine a present value to 
 *           deposit for a certain future value to be 
 *           obtained.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float presentValue (float , float , float );

//Execution begins here
void main(int argc, char** argv) {
    //Declare variables
    float result, futurevalue, annualrate, years;
    
    //Initialize variables
    
    //Input data
    cout <<"Future value:\n";
    cin >> futurevalue;
    cout <<"Annual rate to consider:\n";
    cin >> annualrate;
    cout <<"Number of years:\n";
    cin >> years;
    //call function
    result = presentValue (futurevalue, annualrate, years);
    cout <<"Need to deposit present amount = $"<< result << endl;
    //Function definition
    float presentValue (float F, float r, float n)
    {
        float result, F, r, n;
        result = F/(pow((1+r),n));
        return result;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

