#include "Employee.h"

Employee::Employee(){}
Employee::Employee(int id, string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno){
    Id = id;
    FName = fName;
    MInit = mInit;
    LName = lName;
    SSN = ssn;
    BDate = bDate;
    Address = address;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
}
int Employee::GetId(){
    return Id;
}
string Employee :: ToString(){
    string s("");
    s += "{";
    s +="Id: " + to_string(Id)+",";
    s +="FName: " + FName + ", ";
    s +="MInit: " + MInit +",";
    s +="LName: " + LName +",";
    s +="SSN: " + to_string(SSN)+ ",";
    s +="BDate: " + BDate +", ";
    s +="Address: " + Address + ",";
    s +="Sex: " + std::string(1,Sex);
    s +="Salary: " + to_string(Salary)+ ",";
    s +="SuperSSN: " + to_string(SuperSSN) +",";
    s +="DNO: " + to_string(DNO);
    s +="}";
    return s;
}
/** @brief Function converts this object to string 
 * 
 * Function converts this object to string
 * @return string s;
 */ 

json Employee::ToJson(){
    json j;
    j["Id"] = Id;
    j["FName"] = FName;
     j["MInit"] = MInit;
      j["LName"] = LName;
       j["SSN"] = SSN;
        j["BDate"] = BDate;
         j["Address"] = Address;
          j["Sex"] = Sex;
           j["Salary"] = Salary;
            j["SupperSSN"] = SuperSSN;
             j["DNO"] = DNO;
    return j;
}