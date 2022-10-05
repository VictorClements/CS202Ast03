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

#include "doctorType.h"
#include <iostream>

doctorType::doctorType(string first = "", string last = "", string spl = ""){   // may have to get rid of the defaults for this
    setName(first, last);
    specialty = spl;
    if(spl == ""){
        std::cout << "Specialty is missing for Dr." << getFirstName();
    }
}

void doctorType::setSpecialty(string spl){
    specialty = spl;
}

string doctorType::getSpecialty() const{
    return specialty;
}

void doctorType::print() const{
    cout << "Dr." << getFirstName() << " " << getLastName() << "; Specialty" << specialty;
}