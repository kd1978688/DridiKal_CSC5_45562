/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 17, 2017, 6:32 PM
 * Purpose:  This program will compute the charges for a patient's 
 *           hospital stay.
 *           Program will ask for the patient type and calculate charges 
 *           charges according to the type.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double getTotalCharges (int, double, double, double);
double getTotalCharges (double, double);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int patient, num_days;
    double day_rate, med_charges, serv_charges;
    double total;
    
    //Initialize variables
    cout <<"Enter type of patient (1 for in-patient, or 2 for out-patient):\n";
    cin >> patient;
    //verify type of patient
    while (patient !=1 && patient !=2)
    {
        cout <<"Enter type of patient (1 for in-patient or 2 for out-patient):\n";
        cin >> patient;
    }
    //Input hospital medication charges
    cout <<"Enter the hospital medication charges:\n";
    cin >> med_charges;
    //Validate charges
    while (med_charges <0)
    {
        cout <<"Invalid input. Enter valid value:\n";
        cin >> med_charges;
    }
    //Prompt for hospital service charges
    cout <<"Enter hospital service charges:\n";
    cin >> serv_charges;
    //Validate service charges
    while (serv_charges < 0)
    {
        cout <<"Invalid service charges entry. Enter valid value:\n";
        cin >> serv_charges;
    }
    if (patient == 1)
    {
        cout <<"Enter the number of days of hospital stay:\n";
        cin >> num_days;
    
        //Validate the number of days
     while (num_days < 0)
        {
        cout <<"Invalid number of days. Enter a valid number:\n";
        cin >> num_days;
        }
     //Prompt for the daily rate
        cout <<"Enter daily rate:\n";
        cin >> day_rate;
     //Validate the daily rate
      while (day_rate < 0)
        {
             cout <<"Invalid Entry. re-enter rate:\n";
            cin >> day_rate;
        }
    //Input data
    //Call function
    total = getTotalCharges (num_days, day_rate, med_charges, serv_charges);
    }
    else
        total = getTotalCharges (med_charges, serv_charges);
         //Display total hospital charges for the patient
          cout <<"Total hospital charges for the patient are: $"<< total << endl;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}
//Function definition for getTotalCharges
double getTotalCharges (int num_days, double day_rate, double med_charges, double serv_charges)
{
    //Declare local variable
    double total;
    total = (day_rate*num_days)+med_charges+serv_charges;
    return total;
}
//Function definition for overloaded function
double getToatalCharges (double med_charges, double serv_charges)
{
    //Declare local variable
    double total;
    total = med_charges + serv_charges;
    return total;
}

