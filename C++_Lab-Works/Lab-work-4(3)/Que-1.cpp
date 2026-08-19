#include <iostream>
using namespace std;

class Employee
{
    protected:
        int emp_id, emp_salary;
        string emp_name;
    
    public:

        virtual void setEmp_info() = 0;
        virtual void getEmp_info() = 0;
        int getId()
        {
            return emp_id;
        }
};

class Fulltime_Employee : public Employee{
    
    protected:
        int bonus;

    public:

        Fulltime_Employee(){}

        void setEmp_info()
        {
            cout << "Enter Employee ID:- ";
            cin >> emp_id;
            cout << "Enter Employee Name:- ";
            cin >> emp_name;
            cout << "Enter Employee Salary:- ";
            cin >> emp_salary;
            cout << "Enter Employee Bonus:- ";
            cin >> bonus;
            cout << endl << endl;
        }
        
        void getEmp_info() override
        {
            cout << "Employee Id Is :- " << emp_id << endl;
            cout << "Employee Name Is :- " << emp_name << endl;
            cout << "Employee Salary Is :- " << emp_salary << endl;
            cout << "Employee Bonus Is :- " << bonus << endl;
        }

        ~Fulltime_Employee(){};

        
};

class Partime_Employee : public Employee{
    
    protected:
        int wrk_hrs;

    public:
        
        Partime_Employee(){}
        
        void setEmp_info()
        {
            cout << "Enter Employee ID: ";
            cin >> emp_id;
            cout << "Enter Employee Name: ";
            cin >> emp_name;
            cout << "Enter Employee Salary: ";
            cin >> emp_salary;
            cout << "Enter Employee Bonus: ";
            cin >> wrk_hrs;
            cout << endl << endl;
        }
        
        void getEmp_info() override
        {
            cout << "Employee Id Is :- " << emp_id << endl;
            cout << "Employee Name Is :- " << emp_name << endl;
            cout << "Employee Salary Is :- " << emp_salary << endl;
            cout << "Employee Working Hours Is :- " << wrk_hrs  << endl << endl;
        }

        ~Partime_Employee(){};
    
};

int main()
{
    
    int choice, i, j;
    bool found = true;
    
    cout << "Welcome to employee management system...!!" << endl << endl;
    
    cout << "Here is 2 types of employee." << endl;
    cout << "[1] Full Time Employee." << endl;
    cout << "[2] Part Time Employee." << endl << endl;
    
    Fulltime_Employee* fte = NULL;
    Partime_Employee* pte = NULL;
    
    do{
        int  n1 , n2;
        int empchoice,idchoice;
        
        cout << "||-------------Menu-------------||" << endl;
        cout << "Enter 1 for add new employee." << endl;
        cout << "Enter 2 for display all employees." << endl;
        cout << "Enter 3 for delete employee." << endl;
        cout << "Enter 0 to exit." << endl;
        cout << "||------------------------------||" << endl << endl;

        cout << "Enter your choice :- ";
        cin >> choice;

        switch (choice)
        {
        
            case 1:
                cout << "Which type of employee you want to add ?" << endl;
                cout << "1. Full Time Employee." << endl;
                cout << "2. Part Time Employee." << endl;
                

                cout << "Enter Your Choice :- "; 
                cin >> empchoice;

                if(empchoice == 1)
                {
                    cout << endl << "How many employees do you want to add :- ";
                    cin >> n1;

                    fte = new Fulltime_Employee[n1];
                    
                    for(i=0 ; i<n1 ; i++)
                    {
                        fte[i].setEmp_info();
                    }
                }
                else if(empchoice == 2)
                {
                    cout << endl << "How many employees do you want to add :- ";
                    cin >> n2;
                    pte = new Partime_Employee[n2];
                    
                    for(i=0 ; i<n2 ; i++)
                    {
                        pte[i].setEmp_info();
                    }
                }
                else
                {
                    cout << "Please enter valid choice...!!" << endl;
                }
            
                break;
            
            case 2:

                if(!found)
                {
                    cout << "No Record found...!!" << endl;
                }

                else
                {
                    
                    cout << "Here is the all employees :- " << endl << endl;
                    
                    for(i=0; i<n1; i++)
                    {
                        cout << "<---------- FTE - " << i+1 << "---------->" << endl;
                        fte[i].getEmp_info();
                    }
                                        
                    for(i=0; i<n2; i++)
                    {
                        cout << "<---------- PTE - " << i+1 << "---------->" << endl;
                        pte[i].getEmp_info();
                    }
                    
                }
                
               
                break;

            case 3:
                delete fte;
                delete pte;
                cout << "All Fulltime and PartTime Emplyees are deleted...!!" << endl << endl;
                found = false;
                break;
            
            case 0:
                cout << "You are exited...!!" << endl << "Thanks for visting...!!" << endl << endl;
                break;



                
        default:
            cout << "Please enter a valid choice...!!" << endl << endl;
            break;
        }

    }while(choice != 0);

    return 0;
}