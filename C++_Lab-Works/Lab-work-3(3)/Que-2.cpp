#include<iostream>

using namespace std;


class Cafe{
	
	private:
		int  cafe_Id, cafe_Rating, est_Yr, cafe_Stfquan;
		string  cafe_Name, cafe_Type, cafe_Location;
	
	public:
		
		Cafe(){};				// Default constructor...!!
		
		void setCafe_data(int id, string name, string ctp, int crt, string loc, int cest, int stf)
		{
			cafe_Id = id;
			cafe_Name = name;
			cafe_Type = ctp;
			cafe_Rating = crt;
			cafe_Location = loc;
			est_Yr = cest;
			cafe_Stfquan = stf;
		}
		
		void cafe_Info()
		{
			cout << "Cafe ID :- " << cafe_Id << endl;
			cout << "Cafe Name :- " << cafe_Name << endl;
			cout << "Cafe Type :- " << cafe_Type << endl;
			cout << "Cafe Rating :- " << cafe_Rating <<" Star" << endl;
			cout << "Cafe Location :- " << cafe_Location << endl;
			cout << "Cafe's Establish year :- " << est_Yr << endl;
			cout << "Staff Quantity :- " << cafe_Stfquan << endl;
		}
		
		
		~Cafe(){}					// Using Destructor...!!
};

int main()
{
	
	int n, i, id = 134765, rat, eyr, stf;
	string name, type, loc;
	
	cout << "Enter the number of Cafes :- ";
	cin >> n;
	
	Cafe cf[n];
	
	for(i=0;i<n;i++)
	{
		cout << "\n\nCafe Id :- " << id << endl;
		cout << "Enter Cafe Name :- ";
		cin >> name;
		cout << "Enter Cafe type (Rooftop / Normal) :- ";
		cin >> type;
		cout << "Enter rating(in star) :- ";
		cin >> rat;
		cout << "Enter Location (City) :- ";
		cin >> loc;
		cout << "Enter Establish year :- ";
		cin >> eyr;
		cout << "Enter Staff quantity :- ";
		cin >> stf;
		
		cf[i].setCafe_data(id, name, type, rat, loc, eyr, stf);
		
		id++;
	}
	
	cout << endl <<"==============================" << endl;
	cout << "      Here is the info       " << endl;
	cout <<"==============================" << endl;
	
	for(i=0;i<n;i++)
	{
		cout << endl;
		cf[i].cafe_Info();
	}
	
	return 0;
}