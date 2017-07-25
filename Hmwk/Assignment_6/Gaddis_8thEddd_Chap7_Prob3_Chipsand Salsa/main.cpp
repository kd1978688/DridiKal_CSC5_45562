/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 24, 2017, 11:59 AM
 * Purpose:  This program will keeps track of sales of salsa and chips 
 *           for five different salsa of different heat levels
 *           array of integers and prompt user to enter the number of 
 *           jars. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <cctype>
#include <ctime>
#include <cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    std::string salsa[5] = { "mild","medium","sweet","hot","zesty" };
	int jarsSold[5];
	int totalJarsSold = 0;
	for (int i = 0; i < 5; i++) {
		std::cout << "Enter the amount of jars sold for " << salsa[i] << ": ";
		std::cin >> jarsSold[i];

		//Input Validation: Values cannot be negative
		while (jarsSold[i] < 0) {
			std::cout << "Value cannot be negative. Try again." << std::endl;
			std::cin >> jarsSold[i];
		}

		//Running total of jars sold
		totalJarsSold = totalJarsSold + jarsSold[i];
	}

	//Calculates the type of salsa with highest and lowest jar sales (ASSUMING ALL VALUES ARE DIFFERENT)
	std::string highestSale = salsa[0];
	std::string lowestSale = salsa[0];
	double largest = jarsSold[0];
	double smallest = jarsSold[0];
	for (int i = 0; i < 4; i++) {
		if (largest <= jarsSold[i + 1]) {
			largest = jarsSold[i + 1];
			highestSale = salsa[i + 1];
		}
		else if (smallest > jarsSold[i + 1]) {
			smallest = jarsSold[i + 1];
			lowestSale = salsa[i + 1];
		}
	}
	
	//Display the sales for each salsa type, total amount of jars sold, type of salsa with the highest and lowest amount of jars sold
	for (int i = 0; i < 5; i++) {
		std::cout << "Total amount of jars sold for " << salsa[i] << ": " << jarsSold[i] << std::endl;
	}
	std::cout << "Total amount of jars sold altogether: " << totalJarsSold << std::endl;
	std::cout << "Salsa with the highest amount of jars sold: " << highestSale << std::endl;
	std::cout << "Salsa with the lowest amount of jars sold: " << lowestSale << std::endl;


    //Declare variables
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

