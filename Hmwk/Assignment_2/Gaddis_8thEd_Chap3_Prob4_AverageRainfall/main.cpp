/* 
  File:   main.cpp
  Author: Kal Dridi
  Created on June 21, 2017, 5:25 PM
  Purpose:  This program calculates the average rainfall
 *          for three months!
            
 */

//System Libraries
#include <iostream>
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
    string month_1;
    string month_2;
    string month_3;
    double rainfall_month_1, rainfall_month_2;
    double rainfall_month_3;
    double average;
    
    
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "Enter first month name: " << endl;
    cin >> month_1;
    cout << "Enter "<<month_1<< "'s rainfall in inches:" << endl;
    cin >> rainfall_month_1;
    cout << "Enter second month name: " << endl;
    cin >> month_2;
    cout << "Enter "<<month_2<< "'s rainfall in inches: " << endl;
    cin >> rainfall_month_2;
    cout << "Enter third month name: " << endl;
    cin >> month_3;
    cout << "Enter "<<month_3<< "'s rainfall in inches: " << endl;
    cin >> rainfall_month_3;
    average = (rainfall_month_1+rainfall_month_2+rainfall_month_3) / 3;
    cout << "The average rainfall for "<< month_1<<", "<<month_2<<", and "
            <<month_3<< " is "<< average << " inches." << endl;
    
    //Exit stage right!
    return 0;
}
