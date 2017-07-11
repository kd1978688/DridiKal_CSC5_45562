/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 10, 2017, 8:01 PM
 * Purpose:  This program uses loop to display the characters for the ASCII
 *           codes 0 through 127.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int i=1;
    //Initialize variables
    
    //Input data
    for(int =1; i<=127; i++)
    {
        if(i%16 ==0)
        {
            cout << endl;
            cout << (i) << " ";
        }
        else
            cout << (i) << " ";
    }
    cout << endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

