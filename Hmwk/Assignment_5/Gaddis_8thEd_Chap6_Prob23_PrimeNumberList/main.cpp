/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 16, 2017, 11:41 PM
 * Purpose:  This program use the IsPrime function to store 
 *           a list of all prime numbers from 1 through 100
 *           in a file. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <fstream>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
bool isPrime (int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    ofstream outputfile;
    //Open and output file
    outputfile.open ("primeBefore100.txt");
    //call Function
    outputfile <<"The prime number from 1 through 100."<< endl;
    
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    for (int num=1; num<=100; num++)
    {
        if (isPrime(num))
            outputfile << num << endl;
    }
    //Close the output file
    outputfile.close ();
    
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
//Function Definition
bool isPrime (int integer)
{
    int count=0;
    for (int i=2; i<=integer/2; i++)
    {
        if (integer%i==0)
            count++;
    }
    if (count>0)
        return false;
    else
        return true;
}

