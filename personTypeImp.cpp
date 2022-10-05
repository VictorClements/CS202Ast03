/*
Name: Victor Clements, 5005874024, CS202-1005, Assignment 3
Description: To set the patients and doctors data; print the bill of a 
patient
Input: Develop personType class that can be useful to set first and last 
names from personType class; set the patients data using setters or 
constructors from patienType class; set the doctors data using setters 
or constructors from doctorType class; set the birth date(mm, dd, year) 
of a patient from dateType class; set the charges(pharmacy, room rent, 
doctor fee) of a patient from billType class
Output: Write output to console; print error messages for Invalid IDs,
missing specialty, invalid birth month and year;
check the sample output for reference
*/

#include "personType.h" //include header file for personType class
#include <iostream>     //include iostream for cout

//constructor for the personType class with default parameters
personType::personType(string first = "", string last = ""){    // may have to get rid of the defaults for this
    firstName = first;
    lastName = last;
}

//setter function for firstName and lastName strings
void personType::setName(string first, string last){
    firstName = first;
    lastName = last;
}

//getter function for firstName string
string personType::getFirstName() const{
    return firstName;
}

//getter function for lastName string
string personType::getLastName() const{
    return lastName;
}

//function to print out firstName and lastName strings to screen
void personType::print() const{
    std::cout << firstName << " " << lastName;
}