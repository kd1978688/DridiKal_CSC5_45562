/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 10, 2017, 9:02 PM
 * Purpose:  This program asks for an integer less than 15
 *           than displays a square of the screen.
 */

//System Libraries
#include <iomanip>
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int number;
    
    //Initialize variables
    
    //Input data
    cout <<"Enter a positive integer that is less than 15.\n";
    cin >> number;
    //Map inputs to outputs or process the data
    //Validate the input 
    if (number > 15)
    {
        cout <<"Out of Range number.\n";
        cout <<"Enter a valid number:\n";
        cin >> number;
    }
    else
    {
        for (int i=1; i<=number; i++)
        {
            for (int j=1; j<=number; j++)
                cout <<"x";
            cout <<endl;
        }
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

