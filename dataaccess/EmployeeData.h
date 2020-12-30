#ifndef Project_dataaccess_Employee_Data_H_
#define Project_dataaccess_Employee_Data_H_
#include <vector>
#include "../businessobject/Employee.h"

class EmployeeData{
private:
    vector<Employee> _data;
    int _maxId;
public:
    EmployeeData();
    EmployeeData(string);// doc tu file 
    int GetMaxId();
    int PushBack(Employee);
    //Employee Get(int i);
    Employee* GetPointer(int i);
    string Tostring();
    int GetSize();
    int ExporttoFile(string);

    //
    vector<Employee> GetData(); 

    // int AddEmployee(Employee);
    
};
#endif