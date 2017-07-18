/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 17, 2017, 8:56 PM
 * Purpose:  This program will give a conversion table 
 *           from Fahrenheit to Celsius.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double Celsius (double );

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double fahrenheitTemp=0, celsiusTemp;
    
    //Initialize variables
    
    //Input data
    cout <<"Celsius Temperature Table\n";
    cout <<"----------------------------\n";
    cout <<"Fahrenheit\tCelsius\n";
    cout <<"-------------------------\n";
    //Map inputs to outputs or process the data
    for (int i=0; i<=20; i++)
    {
        celsiusTemp = Celsius (fahrenheitTemp);
        cout << fahrenheitTemp++ <<"\t\t"<< celsiusTemp << endl;
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
//Function Definition
double Celsius (double F)
{
    double c;
    c = ((5.0/9.0)*(F-32));
    return c;
}

