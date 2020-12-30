#include <iostream>
#include "EmployeeUI.h"
using namespace std;
#include <string>


EmployeeUI::EmployeeUI(){};

Employee EmployeeUI::InputEmployee(){

    int id; //id is increasing number
    string fName, mInit, lName;
    long ssn;
    string bDate, address;
    char sex;
    int salary;
    long superSSN;
    int dno;
 
    cout<<"Enter informated Employee : ";
    cout << "Id = ";
    cin>> id;
    cout << "FName = ";
    cin >> fName;
    cout << "MInit = ";
    cin >> mInit;
    cout << "LName = ";
    cin>>lName;
    cout <<"SSN = ";
    cin>>ssn;
    cout <<"BDate = ";
    cin >> bDate;
    cin.ignore();
    cout <<"Address= ";
    getline(cin,address);
//    cout <<endl;
    cout << "Sex = ";
    cin >> sex;
    cout << "Salary = ";
    cin >> salary;
    cout << "SuperSSN = ";
    cin >> superSSN;
    cout << "DNO = ";
    cin >> dno;

    Employee e(id,fName,mInit,lName,ssn,bDate,address,sex,salary,superSSN,dno);
    return (e);

}