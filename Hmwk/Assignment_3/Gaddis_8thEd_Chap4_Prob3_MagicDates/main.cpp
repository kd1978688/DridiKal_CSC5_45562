/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 5, 2017, 11:32 AM
 * Purpose:  This program displays a message depending on
 *           whether the date is magic or not.
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
    int month, day, year;
    //Initialize variables
    
    //Input data
    cout <<"Enter the two digits month:\n";
    cin >> month;
    cout <<"Enter the two digits day:\n";
    cin >> day;
    cout <<"Enter the two digits year:\n";
    cin >> year;
    //Map inputs to outputs or process the data
    if (year == month * day)
    
        cout <<"The date is magic.\n";
    else
        cout <<"The date is not magic\n";
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

