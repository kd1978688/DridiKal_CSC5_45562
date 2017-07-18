/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 17, 2017, 7:58 PM
 * Purpose:  This program will ask to enter the width and length
 *           of a rectangle and then display the rectangle's area
 *           The program will use a function getLength and 
 *           getWidth.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double getLength ();
double getWidth ();
double getArea (double,double);
void displayData (double, double, double);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double length, width, area;
    //Call function the declare the length
    length = getLength ();
    //Call function to declare width
    width = getWidth ();
    //Call to get the area function
    area = getArea (length, width);
    //Call to display data
    displayData (length, width, area);
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
//Function Definition
double getLength ()
{
    double len;
    cout <<"Enter Length of the rectangle:\n";
    cin >> len;
    while (len <= 0)
    {
        cout <<"length of rectangle should be greater then 0:\n";
        cin >> len;
    }
    return len;
}

double getWidth ()
{
    double w;
    cout <<"Enter the width of the rectangle:\n";
    cin >> w;
    while (w <= 0)
    {
        cout <<"Width of rectangle should be greater then 0:\n";
        cin >> w;
    }
    return w;
}

double getArea (double l, double w)
{
    double a;
    a = l*w;
    return a;
}

void displayData (double l, double w, double a)
{
    cout << endl;
    cout <<"Length of rectangle: "<< l << endl;
    cout <<"Width of rectangle: "<< w << endl;
    cout <<"Area of rectangle: "<< a << endl;
        
}

