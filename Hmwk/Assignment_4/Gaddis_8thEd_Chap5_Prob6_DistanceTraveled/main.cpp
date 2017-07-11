/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 10, 2017, 8:40 PM
 * Purpose:  This program asks for the speed of a vehicle
 *           and how many hours it traveled. the program than 
 *           should use a loop to display the distance.
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
    float speed, time, dist_traveled;
    //Initialize variables
    dist_traveled = 0;
    //Input data
    cout <<"Enter speed of vehicle in mph:\n";
    cin >> speed;
    cout <<"Hours traveled by vehicle:\n";
    cin >> time;
    //Validate the input 
    if (speed>=1)
    {
        if (time > 1)
        {
            cout <<"Hours Distance Traveled.\n";
            cout <<"-----------------------------"<<"\n";
        }
        for (int i=1; i<=time; i++)
        {
            dist_traveled = speed * i;
            cout << dist_traveled << endl;
            
        }
    }
    else 
    {
        cout <<"Speed cannot be negative.\n";
    }
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

