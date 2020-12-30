#include <iostream>
#include "EmployeeUI.h"
using namespace std;

EmployeeUI::EmployeeIU(){};

EmployeeIU:: AddEmployee(Employee employee)
{
    int N;
    cout<<" Enter number employee : ";
    cin>> N;
    for(int i=0;i<=N;i++)
    {   // bien private nên khong the dung truc tiep, can tim cach.
        // cout << "FName: ";
        // cin >> employee.FName;
        // cout << "MInit: ";
        // cin >> employee.LName;
        // cout << "LName: ";
        // cin >> employee.SSN;
        // cout <<"BDate : ";
        // cin >> employee.BDate;
        // cout <<"Address: ";
        // cin >> employee.Address;
        // cout <<"Sex: ";
        // cin >> employee.Sex;
        // cout <<"Salary: ";
        // cin >> employee.Salary;
        // cout <<"SuperSSN: ";
        // cin >> employee.SuperSNN;
        // cout <<"DNO: ";
        // cin >> employee.DNO;
    }
}

