/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on June 17 , 2017, 07:24 PM
 * Purpose:  code is to be utilized to get the average of a series
 *           of values.
 *      
 *       
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int var_1, var_2, var_3, var_4, var_5;
    int sum, average;
    //Initialize variables
    var_1 = 28;
    var_2 = 32;
    var_3 = 37;
    var_4 = 24;
    var_5 = 33;
    //Input data
    sum = var_1 + var_2 + var_3 + var_4 + var_5;
    //Map inputs to outputs or process the data
    average = sum/5;
    //Output the transformed data
    cout << "Variables = " <<var_1 <<" "<<var_2<<" "<<var_3<<" "; 
    cout <<var_4<<" "<<var_5<< endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    //Exit stage right!
    return 0;
}

