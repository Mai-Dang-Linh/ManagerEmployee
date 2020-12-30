build command
g++ main.cpp businessobject/Employee.cpp dataaccess/EmployeeData.cpp -o main.exe

Give information from table data 
g++ main.cpp businessobject/Employee.cpp dataaccess/EmployeeData.cpp libs/json.hpp -o main.exe

Add from file ui.

g++ main.cpp businessobject/Employee.cpp dataaccess/EmployeeData.cpp ui/EmployeeUI.cpp -o main.exe


