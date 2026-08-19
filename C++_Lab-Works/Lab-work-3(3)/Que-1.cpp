#include<iostream>

using namespace std;

class Company{
	
	
	private:
	
		int comp_id, compStaff_quan, comp_revenue, impo_Rawdimnd, expo_dimnd;
		string comp_name, ceo_name;
		
	public:
		
		Company(){
		}
		
		Company(int cid, string cname, int stquan, int crev, int impdimnd, int exdimnd, string ceo)
		{
			comp_id = cid;
			comp_name = cname;
			compStaff_quan = stquan;
			comp_revenue = crev;
			impo_Rawdimnd = impdimnd;
			expo_dimnd = exdimnd;
			ceo_name = ceo;
		}
		
		void comp_Info()
		{
			cout << "Company ID :- " << comp_id << endl;
			cout << "Company Name :- " << comp_name << endl;
			cout << "Staff Quantity :- " << compStaff_quan << endl;
			cout << "Company Revenue (Per Year) :- " << comp_revenue << endl;
			cout << "Raw diamonds imported per year :- " << impo_Rawdimnd << endl;
			cout << "Exported diamonds per year :- " << expo_dimnd << endl;
			cout << "Company's CEO name :- " << ceo_name << endl;	
		}
		
};


int main()
{
	int i, n, id = 1023587;
	
	cout << "Enter number of companies :- ";
	cin >> n;
	cout << endl;
	
	Company cmp[n];
	
	int stquan, crev, impdimnd, exdimnd;
	string cname, ceo;
	
	for(i=0;i<n;i++)
	{
		cout << endl << "Comapny ID :- " << id;
		
		cout << endl << endl <<"Enter Company name :- ";
		cin >> cname;
		cout << "Enter Company's CEO name :- ";
		cin >> ceo;
		cout << "Enter Staff quantity :- ";
		cin >> stquan;
		cout << "Enter Company Revenue (in Crores Per Year) :- ";
		cin >> crev;
		cout << "Row diamonds imported :- ";
		cin >> impdimnd;
		cout << "Row diamonds exported :- ";
		cin >> exdimnd;
		
		cmp[i] = Company(id, cname, stquan, crev, impdimnd, exdimnd, ceo);
		
		id++;
	}
	
	for(i=0;i<n;i++)
	{
		cout << endl;
		cmp[i].comp_Info();
		cout << endl;
	}
	
	return 0;
}