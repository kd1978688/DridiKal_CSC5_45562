/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on June 28, 2017, 12:59 PM
 * Purpose:  Program to CAlculate the percentage Gas Tax
 *           on a gallon of gas, and the percentage profit 
 *           made from a gallon of gas given.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT = 100.0f;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float Fed_excise_Tax;
    float CA_excise_tax;
    float Sales_Tax;
    float Cp_Tax;
    float OilComp_Profit;
    float Pump_price, base_price;
    float pc_gas_tax, pc_profit;
    
           
            
    
    
    
    //Initialize variables
    Fed_excise_Tax = 0.184f;
    CA_excise_tax = 0.390f;
    Sales_Tax = 0.080f;
    Cp_Tax = 0.100f;
    OilComp_Profit = 0.700f;
    
    
    
    
         
    //Input data
    cout <<"Price paid at the pump $'s/Gallons: $";
    cin >> Pump_price;
    
    //Map inputs to outputs or process the data
    base_price = (Pump_price-Fed_excise_Tax-CA_excise_tax-Cp_Tax-OilComp_Profit)/(1+Sales_Tax);
    pc_gas_tax = (base_price*Sales_Tax+Fed_excise_Tax+CA_excise_tax+Cp_Tax)/base_price*PERCENT;
    pc_profit = OilComp_Profit/base_price*PERCENT;
    
    //Output the transformed data
    cout <<"Federal Excise Tax/gallon   = $"<<Fed_excise_Tax<< endl;
    cout <<"CA Excise Tax/gallon        = $"<<CA_excise_tax<< endl;
    cout <<"Sales Tax/gallon            = $"<<base_price*Sales_Tax<< endl;
    cout <<"Cap & Trade tax/gallon      = $"<<Cp_Tax<< endl;
    cout <<"Oil Company Profit/gallon   = $"<<OilComp_Profit<< endl;
    cout <<"Base Price/gallon           = $"<<base_price<< endl;
    cout <<"Percentage Gas Tax/gallon   =  "<<pc_gas_tax<<" %"<< endl;
    cout <<"Oil Company Profit/gallon   =  "<<pc_profit<<" %"<< endl;
    
    //Exit stage right!
    return 0;
}

