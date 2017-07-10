/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 5, 2017, 09:58 PM
 * Purpose:  This program asks an object's mass then 
 *           calculates it's weight followed by a comment.
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
    float mass;         //Object's mass is stored in this variable
    float weight;       //Stores the calculated object weight
    
    //Initialize variables
    
    //Input data
    cout <<"Enter Object's mass:\n";
    cin >> mass;
    //Map inputs to outputs or process the data
    weight = (mass * 9.8);
    cout << fixed << showpoint << setprecision(2);
    cout <<"Object's weight = "<< weight << " N" << endl;
    
    //Output the transformed data
    if (weight > 1000)
    {
        cout <<"Object is too heavy.\n";
    }
    else if (weight < 10)
    {
        cout <<"Object is too light.\n";
    }
    
    //Exit stage right!
    return 0;
}

