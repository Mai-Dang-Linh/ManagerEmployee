#include "EmployeeData.h"
#include <fstream>
#include "../libs/json.hpp"

using json = nlohmann::json;

EmployeeData::EmployeeData(){
    _maxId = 0;
    _data.resize(0);
}
//doc file
EmployeeData::EmployeeData(string filename){
    _maxId = 0;
    _data.resize(0);
    ifstream inFile(filename);
    const int maxSize =255;
    char buff[maxSize];
    while(inFile.getline(buff,maxSize)){
        json j = json::parse(buff);
        string Sex = to_string( j["Sex"]);
        Employee e(
            j["Id"],
            j["FName"],
            j["MInit"],
            j["LName"],
            j["SSN"], 
            j["BDate"],
            j["Address"],
            // (char)((int) j["Sex"]),
            Sex[0],
            j["Salary"], 
            j["SupperSSN"],
            j["DNO"] 
        );
        _data.push_back(e);
        _maxId = j["Id"];
    }
    inFile.close();
}
int EmployeeData::GetMaxId(){
    return _maxId;
}
int EmployeeData::PushBack(Employee e){
    if (_maxId < e.GetId()){
        _maxId = e.GetId();
    }
    _data.push_back(e);
    return _maxId;
}
//Employee EmployeeData::Get(int i){}
Employee* EmployeeData::GetPointer(int i){
    Employee* e = nullptr;
    if (i >= 0 && i<_data.size())
        e = &_data[i];
    return e;
}
string EmployeeData::Tostring(){
    string s("");
    for (Employee e:_data){
        s += e.ToString();
        s +="\n";
	}
    return s;
}
int EmployeeData::ExporttoFile(string filename){
    ofstream outFile(filename,ios::out);
    if(!outFile) return 0;
    for(Employee e:_data){
        outFile << e.ToJson() << endl;
    }
    outFile.close();
    return 1;
    }

int EmployeeData ::GetSize(){
    return _data.size();
}
// lay dữ lieu tu mot vector.
vector<Employee> EmployeeData::GetData(){
    return _data;
}; 
// void EmployeeData::AddEmployee(){
//     EmployeeData employeeData;
//     Employee e()
//     employeeData.PushBack()

// }