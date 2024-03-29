#include <iostream>
#include "businessobject/Employee.h"
#include "dataaccess/EmployeeData.h"
#include "libs/json.hpp"
#include "ui/EmployeeUI.h"
#include <string>
#include <vector>

using namespace std;
using json = nlohmann::json;
/** @brief Function Employee data.
 * 
 * Function load input data ___
 * @return not 
 */
void GenerateEmployeeData(EmployeeData& a){
    Employee e1(1, "John", "B", "Smith", 123456789, "1965-01-09", "731 Fondren, Houston, TX", 'M', 30000, 333445555, 5);
    Employee e2(2, "Franklin", "T", "Wong", 333445555, "1955-12-08", "638 Voss, Houston, TX", 'M', 40000, 888665555, 5);
    Employee e3(3, "Alida", "J", "Zelaya", 999887777, "968-07-19", "3321 Castle, Spring. TX", 'F', 25000, 987654321, 4);
    Employee e4(4, "Jennifer", "S", "Wallace", 987654321, "1941-06-20", "291 Berry Bellaire. TX", 'F', 43000, 888665555, 4);
    Employee e5(5, "Ramesh", "K", "Narayan", 666884444, "1962-09-15", "975 Fire Oak, Huml* TX", 'M', 38000, 333445555, 5);
    Employee e6(6, "Joyce", "A", "English", 453453453, "1972-07-31", "5631 Rice, Houston, TX", 'F', 25000, 333445555, 5);
    Employee e7(7, "Ahmad", "V", "Jabbar", 987987987, "1969-03-29", "980 Dallas. Houston, TX", 'M', 25000, 987654321, 4);
    Employee e8(8, "James", "E", "Borg", 888665555, "1937-11-10", "450 Stone, Houston, TX", 'M', 55000, -1, 1);
    a.PushBack(e1);
    a.PushBack(e2);
    a.PushBack(e3);
    a.PushBack(e4);
    a.PushBack(e5);
    a.PushBack(e6);
    a.PushBack(e7);
    a.PushBack(e8); 
}
void Write_to_file(EmployeeData ef){
    GenerateEmployeeData(ef);
    ef.ExporttoFile("Outdata.json");
}
void PrintInformation(EmployeeData employeeData)
{
    cout << " Information: "<<endl;
    cout << employeeData.Tostring();
}
// void Read_employee_from_file(){
//     EmployeeData employeeData("Outdata.json");
//     for(int i = 0; i< employeeData.GetMaxId(); i++){
//         Employee* f = employeeData.GetPointer(i);
//         cout << f->ToString()<< endl;
//         cout << "--------------------------------------------------------------------------" << endl;
//     }
// }

int main(){


    Employee employee;

    EmployeeUI inputE;

    EmployeeData employeeData("OutData.json");
//    PrintInformation(employeeData);
    Write_to_file(employeeData);
    cout <<"Lay dữ lieu tu vector :"<< endl;
 //   cout << employeeData.GetData();

    cout << employeeData.GetMaxId();
    char M;
    cout <<"Enter new employee, press Y : ";;
    cin>>M;
    if(M ='Y')
    {
    employee = inputE.InputEmployee();
    employeeData.PushBack(employee);

    cout << employeeData.GetMaxId();
    // employeeData.ExporttoFile("Outdata.json"); 
    }
    



    // for(int i = 0; i< employeeData.GetMaxId(); i++){
    //     Employee* f = employeeData.GetPointer(i);
    //     cout << f->ToString()<< endl;
    //     cout << "--------------------------------------------------------------------------" << endl;
    // }
    // EmployeeData employeeData("Outdata.json");

    // GenerateEmployeeData(employeeData);// du lieu dau vao
    // PrintInformation(employeeData);// in ra du lieu 
    // employeeData.ExporttoFile("Outdata.json");
    // PrintInformation(employeeData);






    // Write_to_file(e);
    // read_employee_from_file();

//    cout<< e.Tostring();
//    cout << read_employee_from_file();



    cout<<"hello";


    // Employee* e1 = employeeData.GetPointer(2);
    // if (e1 == nullptr){
    //     cout << "can not get Employee" << endl;
    // }

    // else{
    //     cout << e1->GetId() << endl;
    // }
    return 0;
}

