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

#include "dateType.h"
#include <iostream>

dateType::dateType(int month = 1, int day = 1, int year = 1910){    // may have to get rid of the defaults for this
    dMonth = month;
    dDay = day;
    dYear = year;
}

void dateType::setDate(int month, int day, int year){
    dMonth = month;
    dDay = day;
    dYear = year;
}

int dateType::getDay() const{
    return dDay;
}

int dateType::getMonth() const{
    return dMonth;
}

int dateType::getYear() const{
    return dYear;
}

void dateType::printDate() const{
    std::cout << dMonth << "-" << dDay << "-" << dYear;
}