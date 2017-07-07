/* 
  File:   main.cpp
  Author: Kal Dridi
  Created on June 22, 2017, 4:35 PM
  Purpose:  The program is designed to play a word game
            project!
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string name, age, city, college, profession;
    string animal_name;
    string pet_name;
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "Please enter Parameters:" << endl;
    cout << "Name:" << endl;
    getline (cin,name);
    cout << "Age:" << endl;
    getline (cin,age); 
    cout << "City:" << endl;
    getline (cin,city); 
    cout << "College:" << endl;
    getline (cin,college);
    cout << "Profession:" << endl;
    getline (cin,profession); 
    cout << "Animal type:" << endl;
    getline (cin,animal_name); 
    cout << "Pet Name:" << endl;
    getline (cin,pet_name);
    cout << "\n------------------------\n";
    cout << "There once was a person named " << name << " who lived in "<<
            city << ". At the age of " << endl;
    cout << age << ", " << name << " went to college at " << college << ". " <<
            name << " graduated and went to work" << endl;
    cout << "as a " << profession << ". Then, " << name << " adopted a(n) " <<
            animal_name << " named " << pet_name << ". They" << endl;
    cout << "both lived happily ever after!" << endl;

    //Exit stage right!
    return 0;
}
