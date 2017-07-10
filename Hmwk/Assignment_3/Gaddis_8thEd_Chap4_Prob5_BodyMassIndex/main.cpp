/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 5, 2017, 8:15 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>    // needed for the pow function
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float BMI;      //Body mass index
    float weight;   //Body weight
    float height;   //Body height
    
    //Initialize variables
    
    //Input data
    cout <<"Body weight in pounds:\n";
    cin >> weight;
    cout <<"Body height in inches:\n";
    cin >> height;
    
    //Map inputs to outputs or process the data
    BMI = 703/pow(height,2.0) * weight ;
    cout << fixed << showpoint << setprecision (2); 
    cout <<"Body Mass Index is:"<< BMI << endl;
    
    //Output the transformed data
    if (BMI>=18.5 && BMI<=25)
    {
        cout <<"Person has optimum weight.\n";
    }
    else if (BMI <=18.5)
    {
        cout <<"Person is underweight.\n";
    }
    else
    {
        cout <<"Person is overweight.\n";
    }
    //Exit stage right!
    return 0;
}

