/* 
  File:   main.cpp
  Author: Kal Dridi
  Created on June 22, 2017, 1:51 PM
  Purpose:  This program is to convert Celsius to Fahrenheit
            projects!
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
    float Celcius, Fehr;
    
    //Input values
    
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "What is the Celsius value:" << endl;
    cin >> Celcius;
    Fehr = 9/5 * Celcius + 32;
    cout << Celcius << " Degree Celcius equals " << Fehr << " Degrees fehrenheit"
            << endl;

    //Exit stage right!
    return 0;
}
