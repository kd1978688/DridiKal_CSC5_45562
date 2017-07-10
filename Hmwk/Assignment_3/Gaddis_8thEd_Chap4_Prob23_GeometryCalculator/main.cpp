/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 6, 2017, 4:52 PM
 * Purpose:  This program displays a menu and should ask
 *           for the radius of a circle and then displays 
 *           its area. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float pi = 3.14159;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int choice;                 //To hold a menu choice
    float area;
    float radius, length, width, base, height;
    
    //Initialize variables
    //Constant for menu choices
    const int area_circle = 1,
            area_rectangle = 2,
            area_triangle = 3,
            quit_choice = 4;
    
    //Input data
    //Display a menu and make a choice
    cout << "\t\tGeometry Calculator\n\n"
         << "1. Calculate the area of a Circle\n"
         << "2. Calculate the area of a Rectangle\n"
         << "3. Calculate the area of a Triangle\n"
         << "4. Quit\n"
         << "Enter you Choice (1-4): "<< endl;
    //enter the choice from the option menu
         cin >> choice;
    //Validation of Input
         if (choice<1 || choice>4)
         {
             cout <<"Invalid Input! R-enter Choice.\n";
             cin >> choice;
         }
    //Set the numeric output formatting
         cout << fixed << showpoint << setprecision(2);
         switch (choice)
         {
             case area_circle:
                 cout <<"Enter radius of Circle:\n";
                 cin >> radius;
                 area = pi * pow(radius,02);
                 cout <<"Area of Circle is:\n"<< area << endl;
                 break;
             case area_rectangle:
                 cout <<"Enter Length of Rectangle:\n";
                 cin >> length;
                 cout <<"Enter Width of Rectangle:\n";
                 cin >> width;
                 area = length * width;
                 cout <<"Area of Rectangle is:\n"<< area << endl;
                 break;
                 
             case area_triangle:
                 cout <<"Enter Base of Triangle:\n";
                 cin >> base;
                 cout <<"Enter Height of Triangle:\n";
                 cin >> height;
                 area = base * height * 0.5;
                 cout <<"Area of Triangle is:\n"<< area << endl;
                 break;
             case quit_choice:
                 cout <<"Program Ending.\n";
                 break;
         }
             
         
                        
                 
            
             
               
                 
                 
                 
            
                 
 
                 
         
    
    
  
         
    
    
            
    
    //Map inputs to outputs or process the data
         
    
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

