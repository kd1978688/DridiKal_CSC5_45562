/* 
  File:   main.cpp
  Author: Kal dridi
  Created on June 21, 2017, 3:28 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    double ticketA, ticketB, ticketC;
    double priceA, priceB, priceC;
    double amount;
    //Input values
    priceA = 15.0;
    priceB = 12.0;
    priceC = 9.0;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "Enter the number of tickets for ticketA";
    cin >> ticketA;
    cout << "Enter the number of tickets for ticketB";
    cin >> ticketB;
    cout << "Enter the number of tickets for ticketC";
    cin >> ticketC;
    amount = (priceA*ticketA+priceB*ticketB+priceC*ticketC);
    cout << "Total amount of ticket sales: $" <<setprecision(2)
            << fixed <<amount<< endl;
   
    //Exit stage right!
    return 0;
}
