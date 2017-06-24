/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on June 16, 2017, 10:42 PM
 * Purpose:  Programming for calculating
 *           land market pricing.
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
    double acres;
    double square_feet, land;
    
    //Initialize variables
    land = 391,876;
    acres = 43,560;
    //Input data
    
    //Map inputs to outputs or process the data
    square_feet = land/acres;
    //Output the transformed data
    cout <<"Square footage of Land = "<<square_feet<< endl;
    //Exit stage right!
    return 0;
}

