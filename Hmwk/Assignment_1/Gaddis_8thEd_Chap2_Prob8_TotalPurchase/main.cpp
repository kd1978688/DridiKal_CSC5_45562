/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on June 18, 2017, 09:25 PM
 * Purpose:  Program to hold the price of five items
 *           and display each item's price, subtotal, and 
 *           the amount of the sales tax, and the total.
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
    double item_1, item_2, item_3, item_4, item_5;
    double subtotal, sales_tax, total;
    //Initialize variables
    item_1 = 15.95;
    item_2 = 24.95;
    item_3 = 6.95;
    item_4 = 12.95;
    item_5 = 3.95;
    //Input data
    subtotal = item_1+item_2+item_3+item_4+item_5;
    //Map inputs to outputs or process the data
    sales_tax = subtotal * 0.07;
    total = subtotal + sales_tax;
    //Output the transformed data
    cout <<"Item 1  $"<<item_1<< endl;
    cout <<"Item 2  $"<<item_2<< endl;
    cout <<"Item 3  $"<<item_3<< endl;
    cout <<"Item 4  $"<<item_4<< endl;
    cout <<"Item 5  $"<<item_5<< endl;
    cout <<"Subtotal  $"<<subtotal<< endl;
    cout <<"Sales tax  $"<<sales_tax<< endl;
    cout <<"Total  $"<<total<< endl;
           
    //Exit stage right!
    return 0;
}

