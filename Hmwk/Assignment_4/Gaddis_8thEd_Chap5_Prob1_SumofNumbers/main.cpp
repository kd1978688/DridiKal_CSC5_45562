/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 10, 2017, 7:51 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
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
    int num, sum=0;
    
    //Initialize variables
    
    //Input data
    cout <<"Enter a positive integer value:\n";
    cin >> num;
    //Map inputs to outputs or process the data
    for (int i=1; i <= num; i++)
    {
        sum +=i;
    }
    //Output the transformed data
    cout <<"Sum of all the integers from 1 up to"<< num <<" is:";
    cout << sum << endl;
            
    //Exit stage right!
    return 0;
}

