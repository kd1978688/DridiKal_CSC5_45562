/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 16, 2017, 10:07 PM
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
bool isPrime (int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int number;
    
    
    //Initialize variables
    
    //Input data
    cout <<"Enter number:\n";
    cin >> number;
    //Function call to check number
    if (isPrime(number))
        cout <<"Prime number."<< endl;
    else
        cout <<"Not prime number."<< endl;
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
//Function Definition
bool isPrime (int num)
{
    int count=0;
    for (int i=2; i<=num/2; i++) //To repeat a loop 
    {
        if (num%i==0)
            count++;
    }
    if (count>0)
        return false;
    else
        return true;
}

