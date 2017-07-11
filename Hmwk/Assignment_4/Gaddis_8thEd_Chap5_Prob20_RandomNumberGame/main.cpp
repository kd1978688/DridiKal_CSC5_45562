/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 10, 2017, 9:32 PM
 * Purpose:  This program asks to enter a number that he or she 
 *           guessed.
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
    int x;
    unsigned int number;
    //Initialize variables
    number = 1 + rand() % 100;
    
    //Input data
    cout <<"Guessing a number between 1 and 100.\n";
    do
    {
        cin >> x;
        if (x < number)
            cout <<"Too low, try again.\n";
            break;
        if (x > number)
            cout <<"Too high, try again.\n";
            break;
        if (x == number)
           cout <<"Congrats!! Your guess is correct!!.\n";
           break;
        
        
    }
    while (x!=number);
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

