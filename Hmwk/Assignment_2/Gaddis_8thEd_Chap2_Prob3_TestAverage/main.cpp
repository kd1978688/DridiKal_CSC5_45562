/* 
  File:   main.cpp
  Author: Kal Dridi
  Created on June 3, 2017, 12:15 PM
  Purpose:  This program is to calculate test Average
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
    double score_1, score_2, score_3, score_4, score_5;
    double average;
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout <<"What is test score 1?" << endl;
    cin >> score_1;
    cout << "What is test score 2?" << endl;
    cin >> score_2;
    cout << "What is test score 3?" << endl;
    cin >> score_3;
    cout << "What is mid-term score?" << endl;
    cin >> score_4;
    cout << "What is final test score?" << endl;
    cin >> score_5;
    average = (score_1+score_2+score_3+score_4+score_5) / 5;
    cout << "Average Test Score: " << setprecision(1) << fixed << average << endl;
    

    //Exit stage right!
    return 0;
}
