/* 
  File:   main.cpp
  Author: Kal Dridi
  Created on June 19, 2017, 12:33 AM
  Purpose:  This program determines miles per gallon
 *          using cin !
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
    double miles;
    double gallons;
    double MPG;
    //Input values
    
    //Process by mapping inputs to outputs
    MPG = miles / gallons;
    //Output values
    cout << "This program calculates miles per gallon" << endl;
    cout << "What is fuel tank capacity? " << endl;
    cin >> gallons;
    cout << "What is the mileage the car is driven " << endl;
    cin >> miles;
    MPG = miles / gallons;
    cout << "The gas mileage of the vehicle is " << MPG << ".\n";
    //Exit stage right!
    return 0;
}
