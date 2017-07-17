/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 16, 2017, 5:00 PM
 * Purpose:  This program implement a function that receives
 *           wholesale cost and markup percentage as arguments and 
 *           returns retail price of the item.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void calculateRetail (int, int);


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int wcost, retail, M_percent;
    
    //Initialize variables
    
    //Input data
    cout <<"Enter wholesale cost:\n";       //Imputing wholesale cost
    cin >> wcost;
    cout <<"Enter markup Percentage:\n";    //Imputing markup percentage
    cin >> M_percent;
    //validation of input
    if (wcost <=0)
    {
        cout <<"Sorry, Invalid wholesale cost\n";
        cout <<"Wholesale cost cannot be negative.\n";
        cout <<"Please enter a positive value:\n";
        cin >> wcost;
    }
    //Function call that inputs retail
    calculateRetail (wcost, M_percent);
    
    
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
void calculateRetail (int wcost, int M_percent)
{
    cout <<"The retail price of the item is: $";
    cout << wcost + ((wcost*M_percent)/100) << endl;
}

