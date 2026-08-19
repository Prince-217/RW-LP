#include<iostream>

using namespace std;

class Employee{
	
	private:
		
		//private code
		
		int eid, eage, esalary, eexp;
		string ename, erole, ecity, ecomp;
		
	public:
		
		void seteid(int a)
		{
			eid = a;
		}
		
		void setName(string a)
		{
			ename = a;
		}
		
		void setage(int a)
		{
			eage = a;
		}
		
		void setrole(string a)
		{
			erole = a;
		}
		
		void setsalary(int a)
		{
			esalary = a;
		}
		
		void setcity(string a)
		{
			ecity = a;
		}
		
		void setexp(int a)
		{
			eexp = a;
		}
		
		void setcomp(string a)
		{
			ecomp = a;
		}
		
		void empInfo()
		{
			cout << "Employee ID :- " << eid << "\n";
			cout << "Employee Name :- " << ename << "\n";
			cout << "Employee Age :- " << eage << "\n";
			cout << "Employee Role :- " << erole << "\n";
			cout << "Employee Salary :- " << esalary << "\n";
			cout << "Employee City :- " << ecity << "\n";
			cout << "Employee Experience (yr) :- " << eexp << "\n";
			cout << "Employee Company :- " << ecomp << "\n";
		}
		
	
};


int main()
{
	Employee e1, e2, e3, e4, e5;
	
	e1.seteid(101);
	e1.setName("Varun");
	e1.setage(20);
	e1.setrole("Executive");
	e1.setsalary(30000);
	e1.setcity("Surat");
	e1.setexp(2);
	e1.setcomp("IT Company");
	e1.empInfo();
	
	cout << endl;
	
	e2.seteid(102);
	e2.setName("Meet");
	e2.setage(22);
	e2.setrole("Developer");
	e2.setsalary(35000);
	e2.setcity("Surat");
	e2.setexp(3);
	e2.setcomp("IT Company");
	e2.empInfo();
	
	cout << endl;
	
	e3.seteid(103);
	e3.setName("Hardik");
	e3.setage(19);
	e3.setrole("Editor");
	e3.setsalary(30000);
	e3.setcity("Surat");
	e3.setexp(2);
	e3.setcomp("IT Company");
	e3.empInfo();
	
	cout << endl;
	
	e4.seteid(104);
	e4.setName("Dhaval");
	e4.setage(24);
	e4.setrole("Salesman");
	e4.setsalary(40000);
	e4.setcity("Surat");
	e4.setexp(5);
	e4.setcomp("IT Company");
	e4.empInfo();
	
	cout << endl;
	
	e5.seteid(105);
	e5.setName("Ravi");
	e5.setage(28);
	e5.setrole("Manager");
	e5.setsalary(50000);
	e5.setcity("Surat");
	e5.setexp(7);
	e5.setcomp("IT Company");
	e5.empInfo();
	
	return 0;
}