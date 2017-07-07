/* 
  File:   main.cpp
  Author: Kal Dridi
  Created on June 22, 2017, 2:25 PM
  Purpose:  This program will calculate interest earned 
            project!
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
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
    double Principle, Rate, Amount, Interest;
    int T;
    
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "Enter the principle amount:" << endl;
    cin >> Principle;
    cout << "Enter the interest rate:" << endl;
    cin >> Rate;
    cout << "Enter the number of times interest is compounded:" << endl;
    cin >> T;
    Rate = Rate / 100;
    Amount = Principle * pow ((1+(Rate/T)), T);
    Interest = Amount - Principle;
    Rate = Rate * 100;
    //Display the Report
    cout << setprecision(2) << fixed;
    cout <<"\n-------------------------\n";
    cout <<"Interest Rate: " <<"\t\t" << setw(9) << Rate
            << "%" << endl;
    cout << "Times Compounded: " << "\t" << setw(9) << T << endl;
    cout << "Principle: " << "\t\t" << setw(8) << "$" << Principle << endl;
    cout << "Interest: " << "\t\t" << setw(8) << "$" << Interest << endl;
    cout << "Amount in Saving: " << "\t\t" << setw(8) << "$" << Amount
            << endl;
    cout << "\n-------------------------\n";
    
    

    //Exit stage right!
    return 0;
}
