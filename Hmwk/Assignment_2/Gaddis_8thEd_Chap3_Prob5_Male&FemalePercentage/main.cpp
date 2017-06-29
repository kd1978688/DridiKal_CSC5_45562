/* 
  File:   main.cpp
  Author: Kal Dridi
  Created on June 21, 2017, 6:19 PM
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
    int number_of_males;
    int number_of_females;
    double percentage_of_males;
    double percentage_of_females;
    double total;
   
    
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "Number of Males registered in a class:" << endl;
    cin >> number_of_males;
    cout << "Number of females registered in a class:" << endl;
    cin >> number_of_females;
    total = number_of_males + number_of_females;
    percentage_of_males = number_of_males / total;
    percentage_of_females=number_of_females/ total;
    cout <<"Percentage of males: " << percentage_of_males*100 <<"%"<< endl;
    cout << "Percentage of females: " << percentage_of_females*100 <<"%"<< endl;
    //Exit stage right!
    return 0;
}
