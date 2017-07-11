/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 10, 2017, 8:32 PM
 * Purpose:  This program uses loop to display the projected rates
 *           increase for the next six years.
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
    float charges = 2500;
    
    //Initialize variables
    
    //Input data
    cout <<"Projected membership rates for six years\n";
    cout <<"-----------------------------"<< endl;
    cout <<"Years/t Charges\n";
    cout <<"-----------------------------";
    
    
    //Map inputs to outputs or process the data
    for(int i=1; i<=6; i++)
    {
        cout << i <<"/t"<< charges << endl;
        charges += charges * 0.04;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

