#ifndef Project_dataacess_Department_Data_H_
#define Project_dataacess_Department_Data_H_
#include <vetor>
#include "../businessobject/Department.h"

class Department{
private:
    vector<Department> _data;
    int _maxId;
public:
    DepartmentData();
    DepartmentData(string);
    int PushBack(Employee);
    Department* GetPointer(int i);
}