/* 
 * File:   main.cpp
 * Author: Kal Dridi
 * Created on July 24, 2017, 4:32 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
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
    //Declare Variables
    int count = 0;
	const int ARRAY_SIZE = 100;
	double numbers[ARRAY_SIZE];
	std::ifstream inputFile;
	std::string filename;
	std::cout << "Enter the filename: ";
	std::cin >> filename;

	//Open file
	inputFile.open(filename);

	//Input validation: Make sure file can be opened
	while (!inputFile) {
		std::cout << "There was an error in opening the file. Try again. \n";
		std::cin >> filename;
		inputFile.open(filename);
	}

	//As long as file can be read, store data from file into array then close the file
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
		count++;
	inputFile.close();
	
	//Find highest and lowest number in the array
	double highest = numbers[0];
	double lowest = numbers[0];
	for (int i = 0; i < count; i++) {
		if (numbers[i] >= highest)
			highest = numbers[i];
		else if (numbers[i] < lowest)
			lowest = numbers[i];
	}
	std::cout << "The highest number in this array is: " << highest << std::endl;
	std::cout << "The lowest number in this array is: " << lowest << std::endl;
	
	//Display the total of numbers in the array along with the average
	double total = 0, average;
	for (int i = 0; i < count; i++) {
		total = total + numbers[i];
	}
	average = total / (count);
	std::cout << "The total of the numbers in the array is: " << total << std::endl;
	std::cout << "The average of the numbers in the array is: " << average << std::endl;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

