/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 08, 2017, 11:32 AM
 * Purpose:  This program utilizes conditional expression 
 *           to determine which number is the smaller and 
 *           which is the larger.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float num_1;    //Stores the first number
    float num_2;    //Stores the second number
    //Initialize variables
  
    //Input data
    //Get the first number
    cout <<"Enter the first number:";
    cin >> num_1;
    //Get the second number
    cout <<"Enter the second number:";
    cin >> num_2;
    //Determine the smaller number
    (num_1 < num_2)? cout<<" First number is smaller and second number is larger." :
        cout <<"First number is larger and second number is smaller." << endl;
             
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    //Display the smaller number
    
    //Exit stage right!
    return 0;
}

