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

#include "patientType.h"
#include <iostream>

patientType::patientType(string id = "", string fName = "",             // may have to get rid of the defaults for this
                         string lName = "", int bDay = 1, int bMth = 1,
                         int bYear = 1910, string docFrName = "",
                         string docLaName = "", string docSpl = ""){
    
}

void patientType::setInfo(string id = "", string fName = "",             // may have to get rid of the defaults for this
                         string lName = "", int bDay = 1, int bMth = 1,
                         int bYear = 1910, string docFrName = "",
                         string docLaName = "", string docSpl = ""){
    
}

void patientType::setID(string id = ""){
    if(checkPatientID(id)){
        ID = id;
        return;
    }
    ID = id;
    cout << "Error: " << ID << " is invalid patientID for " << getFirstName();
}

void patientType::setBirthDate(int bDay = 1, int bMth = 1, int bYear = 1910){
    dateOfBirth.setDate(bMth, bDay, bYear);
    if(bMth < 1 || bMth > 12){
        cout << "Error: Invalid month entry for " << getFirstName();
    }
    if(bYear < 1910 || bYear > 2022){
        cout << "Error: Invalid year entry for " << getFirstName();
    }
}

bool patientType::checkPatientID(string patientIDTmp) const{
    if(patientIDTmp.size() != 6){
        return 0;
    }
    else if(!isupper(patientIDTmp[0])){
        return 0;
    }

    for(int i = 1; i < patientIDTmp.size(); i++){
        if(!isdigit(patientIDTmp[i])){
            return 0;
        }
    }

    return 1;
}
