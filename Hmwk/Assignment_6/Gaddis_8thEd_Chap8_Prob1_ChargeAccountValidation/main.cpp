/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 24, 2017, 5:30 PM
 * Purpose           This program lets you enter charge account 
 *                   number. Program should determine if the account 
 *                   is valid.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void Linear_Search(int [], int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Num_Els = 18;
    const int ARRAY_size = 18;
    int array [ARRAY_size] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    Linear_Search(array, Num_Els);
    //Initialize variables
    
    //Input data
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
void Linear_Search(int array[], int Num_Els)
{
    int charge_num;
    bool found = false;
    cout <<"Enter account charge number:"<< endl;
    cin >> charge_num;
    for (int i = 0; i < Num_Els; i++)
    {
        if (array[i] == charge_num)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout <<"number is valid."<< endl;
    }
    else
    {
        cout <<"Number is invalid"<< endl;
    }
}
//End.

