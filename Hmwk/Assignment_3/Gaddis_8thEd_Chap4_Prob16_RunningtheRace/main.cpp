/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 6, 2017, 9:32 AM
 * Purpose:  This program asks for the name of three runners
 *           and the time it took each of them the finish the 
 *           race. it also shows the standing.
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
    char runner1, runner2, runner3;     //Stores runner name
    int time1, time2, time3;            //Stores runner time
    
    //Initialize variables
    
    //Input data
    cout <<"Enter runner Name:\n" << endl;
    cin >> runner1;
    cout <<"Enter recorded finish time:\n" << endl;
    cin >> time1;
    if (time1 < 0)
    {
        cout <<"Enter positive time:\n";
        cin >> time1;
    }
    cout <<"Enter runner Name:\n" << endl;
    cin >> runner2;
    cout <<"Enter finish time:\n" << endl;
    cin >> time2;
    if (time2 < 0)
    {
        cout <<"Enter positive time:\n";
        cin >> time2;
    }
    cout <<"Enter runner Name:\n" << endl;
    cin >> runner3;
    cout <<"Enter finish time:\n" << endl;
    cin >> time3;
    if (time3 < 0)
    {
        cout <<"Enter positive time:\n";
        cin >> time3;
    }
    if ( time1 < time2)
    {
        if (time2 < time3)
        {
            cout <<"First:"<< runner1 <<" Second:"<< runner2
                    <<" Third:"<< runner3 << endl;
                   
        }
        else
        {
            cout <<"First:"<< runner3 <<" Second:" << runner2 
                    <<" Third:" << runner1 << endl;
        }
    }
    else
    {
        if (time2 < time3)
        {
            cout <<"First:"<< runner2 <<" Second:"<< runner1
                    <<" Third:" << runner1 << endl;
        }
        else
        {
            cout <<"First:"<< runner3 <<" Second:"<< runner2
                    <<" Third:"<< runner1 << endl;
        }
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

