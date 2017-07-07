/* 
  File:   main.cpp
  Author: Kal Dridi
  Created on June 22, 2017, 11:57 AM
  Purpose:  This program is to calculate how minimum amount of  
            insurance can be bought project!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float Replacement_cost;
    float Minimum_amount;
    
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "Enter replacement cost of a structure:" << endl;
    cin >> Replacement_cost;
    Minimum_amount = Replacement_cost * 0.8;
    cout << "The minimum amount of insurance: $" << Minimum_amount << endl;
    //Exit stage right!
    return 0;
}
