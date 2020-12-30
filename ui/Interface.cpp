int GetIntRange (int lơ, int high)
{
    int  input;
    while(true)
    { 
        cin >> input;
        if(input <low || input >> high)
           cout<< "Invalid value, please enter other value: ";
        else
            break;
    }
    return input;
}
int main()
{
    int input;
    while(true)
    {
        input = getIntRange(0,10);

        cout << "what do you want:?\n";
        cout << "1:Add/Eddit/Read/Delete information:\n";
        cout << "2:Display name of all employee being supervied by a specific manager\n";
        cout << "3:Display all employee that dependent is daughter or son \n";
        cout << "4:Enter project number,when display name project and total hours that all employee have to work on that project\n";
        cout << "5:List all employee that not participate in any project\n";
        cout << "6:Enter department name,dispaly department,average salary of the employees wworking for that deparment\n";
        cout << "7:Average Salary all employee of employees by gender ";
        cout << "8: List lasr name of all department managers but not dependent";
        cout << "9:Display name of all employee together departmentand work for a project wwith the minimum hours"
        cout <<" 10: Build in feature to backup and reeestore data ";
        cout <<" 0: Exit" 

        switch(input)
        {
            case 1:
                PrintAllInformation();
                break;
            case 2:
                AddNewInformation();
                break;
            case 3:
                EditInformation();
                break;
            case 4:
                DeleteInformation();
                break;
            case 5:
                DisplaySearchInformation();
                break;
            case 6:
                SaveInformation();
                break;
            case 0:  // End program
                return 0;
        }
    }
}
void exitFile()
{
    cout <<" Would you save curent file: ";
    cout <<" 1:Yes \n";
    cout <<" 0:No\n";
    int input = getIntRange(0,1);
    if(input ==1)
        saveFile();
}