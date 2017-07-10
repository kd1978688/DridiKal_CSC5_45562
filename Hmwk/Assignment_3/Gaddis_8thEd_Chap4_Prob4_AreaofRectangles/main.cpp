/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on June 5, 2017, 6:32 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
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
    float rect_1, rect_2;
    float length_1, length_2, width_1, width_2;
    float L1, L2, W1, W2;
    //Initialize variables
    length_1 = L1;
    width_1 = W1;
    length_2 = L2;
    width_2 = W2;
    
    //Input data
    cout <<"Enter length of rectangle 1:\n";
    cin >> L1;
    cout <<"Enter width of rectangle 1:\n";
    cin >> W1;
    cout <<"Enter length of rectangle 2:\n";
    cin >> L2;
    cout <<"Enter width of rectangle 2:\n";
    cin >> W2;
    
    //Map inputs to outputs or process the data
    rect_1 = L1 * W1;
    rect_2 = L2 * W2;
    if (rect_1 == rect_2)
    {
        cout <<"The area is the same." << endl;
    }
        else if (rect_1 > rect_2)
        {
            cout <<"Rectangle 1 has the greater area.\n";
            
        }
        else
        {
            cout <<"Rectangle 2 has the greater area.\n";
        }
        
        
    
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

