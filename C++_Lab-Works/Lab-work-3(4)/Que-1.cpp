#include<iostream>

using namespace std;

class Student{
	
	
	public:
		int stRollno;
		string stName;
		float stGpa;
	
		Student(){}
		
		Student(string a, int b, float c)
		{
			
			stName = a;
			stRollno = b;
			stGpa = c;
		}
		
		Student(Student &obj)
		{
			
			stName = obj.stName;
			stName = obj.stRollno;
			stName = obj.stGpa;
		}
	
};

class Stud_Recmang{
	
	public:
		
		int rl = 101;
		
		void addStudent(Student &obj)
		{
			string tnm;
			float gpa;
			
			cout << "Enter Student's name :- ";
			cin >> tnm;
			cout << "Student's roll no :- " << rl << endl;
			cout << "Enter Student's GPA :- ";
			cin >> gpa;
			cout << endl << endl;
			
			obj.stName = tnm;
			obj.stRollno = rl;
			obj.stGpa = gpa;
			
			rl++;
			
		}
		
		void printData(Student &obj)
		{
			cout << "Student Roll no :- " << obj.stRollno << endl;
			cout << "Student name :- " << obj.stName << endl;
			cout << "Student's GPA :- " << obj.stGpa << endl << endl;
		}
		
		void searchStud(Student &obj)
		{
			cout << "Student Roll no :- " << obj.stRollno << endl;
			cout << "Student name :- " << obj.stName << endl;
			cout << "Student's GPA :- " << obj.stGpa << endl << endl;
		}
		
};

int main()
{
	
	int n, i, roll, choice, stp = 1, entroll; 
	int temp = 0;
	float gpa;
	string nm;
	
	cout << "Welcome to Student Record Management System...!!" << endl << endl;
	
	cout << "Enter number of students you want to add :- ";
				
	cin >> n;
	cout << endl << endl;
				
	Student st[n];
	Stud_Recmang rec;
	
	
	do{
		
		cout << "Press 1 for Add Student." << endl;
		cout << "Press 2 for View Student data." << endl;
		cout << "Press 3 for Search Student." << endl;
		cout << "Press 0 for Exit." << endl << endl;
		
		cout << "Enter your choice :- ";
		cin >> choice;
		cout << endl;
		
		switch (choice)
		{
			case 1:
				
				if(stp<n)
				{
					cout << "Please fillup the data...!!" << endl;
					cout << "Note :- Roll no is pre-setted , can't be change." << endl << endl;
				
					for(i=0;i<n;i++)
					{
						rec.addStudent(st[i]);
						stp++;
					}
				}
				else
				{
					cout << endl << "Record is Full, You can't add new records...!!" << endl << endl;
				}

				break;
			
			case 2:
				
				cout << endl << "Here is the data...!!" << endl;
				
				for(i=0;i<n;i++)
				{
					rec.printData(st[i]);
				}
				break;
				
			case 3:	
				
				cout << endl << "Enter the roll no of student :- ";
				cin >> entroll;
				
				for(i=0;i<n;i++)
				{
					if(st[i].stRollno == entroll)
					{
						cout << endl << "Requested student's data is here...!!" << endl;
						rec.searchStud(st[i]);
						temp == 1;
						break;
					}
				}
			case 0:
				cout << endl << "You Exited Successfully...!!" << endl;
				cout << "Thanks for visiting...!!";
				break;
				
			default:
				cout << endl << "Please enter a valid choice...!!" << endl;
		}
		
	}while(choice != 0);
	
}

