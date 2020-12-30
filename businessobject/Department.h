#ifndef Project_businessobject_Department_H_
#define Project_businessobject_Department_H_

#include <string>
class Department{
    int Id;
    string DName;
    int DNumber;
    long MgrSSN;
    string MgrStartDate;
public:
    Department();
    Department(int id,string dName, int dnumber, long mgrSSN, string mgrStartDate);
};
#endif