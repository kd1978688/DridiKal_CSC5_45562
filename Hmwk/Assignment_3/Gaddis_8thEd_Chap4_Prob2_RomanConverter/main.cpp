/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 5, 2017, 11:32 AM
 * Purpose:  This program asks to enter a number within 
 *           the range of 1 through 10 than converts it to 
 *           Roman numerical version.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() 
{
    //Declare variables
    int num;     //Stores the chosen number
    
    //Initialize variables
    //Constant for choices
 
    
    //Input data
    cout <<"Enter a number within the range of 1 through 10:\n";
    cin >> num;
    
    //Map inputs to outputs or process the data
    //Checking numeric range using logical operator
    if (num<1 || num>10)
    {
        cout <<"Number out of range.\n";
        cout <<"Enter a number:\n";
        cin >> num;
    }
        switch (num)
    {
        case 1: cout <<"I";
        break;
        case 2: cout <<"II";
        break;
        case 3: cout <<"III";
        break;
        case 4: cout <<"IV";
        break;
        case 5: cout <<"V";
        break;
        case 6: cout <<"VI";
        break;
        case 7: cout <<"VII";
        break;
        case 8: cout <<"VIII";
        break;
        case 9: cout <<"IX";
        break;
        case 10: cout <<"X";
        break;
    }
    
    
        
    
     
    //Output the transformed data
    //Using the switch statement to display Roman numeral.
    
    
    
    //Exit stage right!
    return 0;
}

