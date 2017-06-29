/* 
  File:   main.cpp
  Author: Kal Dridi
  Created on June 21, 2017, 7:18 PM
  Purpose:  This program is used to calculate the number
 *          of widget stacked!!
            
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
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
    float widget_Wt;
    float pallet_Empt;
    float pallet_Wt;
    float widget_Num;
    
    //Input values
    widget_Wt = 12.5;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "How much does empty pallet weigh? (Pounds)" << endl;
    cin >> pallet_Empt;
    cout << "How much does the pallet weigh with widget? (Pounds)" << endl;
    cin >> pallet_Wt;
    widget_Num = (pallet_Wt - pallet_Empt) / widget_Wt;
    cout << "The number of widgets stacked on the pallet: \n";
    cout << widget_Num << endl;
    //Calculation of the number of widget involves conditional clause
    // the number of widget cannot be a fraction
    // in the event the user get a real number then an error message 
    // should appear
    if ((pallet_Wt - pallet_Empt)==0)
    {
        cout << "There are:" << widget_Num << "widgets on the pallet.\n\n";
    }
    else
    {
        cout << "Entered value is not correct. Please enter correct value.";
    }
    //Exit stage right!
    return 0;
}
