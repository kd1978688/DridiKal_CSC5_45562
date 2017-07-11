/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 10, 2017, 9:56 PM
 * Purpose:  This program will calculate the average 
 *           rainfall. 
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
    float years, rainfall, avg, tot_months;
    float tot_avg, tot_rain, total;
    
    //Initialize variables
    avg = 0, tot_months = 0;
    tot_avg = 0, tot_rain = 0;
    
    //Input data
    cout <<"Enter the number of years:\n";
    cin >> years;
    cout <<"Enter rainfall in inches:\n";
    cin >> rainfall;
    for (int i=0, i<years; i++)
    {
        total = d0;
        for (int j = 1; j <= 12; j++)
        {
            cout <<"years"<< (i+1) <<"month";
            cin >> rainfall;
            tot_months += 1;
            total += rainfall;
        }
        tot_rain = tot_rain + total;
        avg = avg + (total/12);
        
    }
    cout <<"total number of months:";
    cout <<tot_rain << "inches" << endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

