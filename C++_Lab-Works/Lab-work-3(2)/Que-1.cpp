#include<iostream>

using namespace std;

class Hotel{
	
	static string hotel_location;
	
	
	private:
	
		int hotel_id, hotel_rating, staff_quan, room_quan, est_yr;
		string hotel_name, hotel_type;
	
	public:
		
		static setHotel_loc(string a)
		{
			hotel_location = a;
		} 
		
		void setHotel_Id(int a)
		{
			hotel_id = a;
		}
		
		void setH_rating(int a)
		{
			hotel_rating = a;
		}
		
		void setStf_quan(int a)
		{
			staff_quan = a;
		}
		
		void setroom_quan(int a)
		{
			room_quan = a;
		}
		
		void setHotel_name(string a)
		{
			hotel_name = a;
		}
		
		void setHotel_type(string a)
		{
			hotel_type = a;
		}
		
		void setEst_yr(int a)
		{
			est_yr = a;
		}
		
		void hotel_Info()
		{
			cout << "Hotel Id :- " << hotel_id << endl;
			cout << "Hotel Name :- " << hotel_name << endl;
			cout << "Hotel's Establish Year :- " << est_yr << endl;
			cout << "Hotel Type :- " << hotel_type << endl;
			cout << "Hotel Location :- " << hotel_location << endl;
			cout << "Hotel Rating :- " << hotel_rating << endl;
			cout << "Staff Quantity :- " << staff_quan << endl;	
			cout << "Room Quantity :- " << room_quan << endl;	
		}
		
};

string Hotel::hotel_location="";

int main()
{
	
	int n, i;
	string loc;
	
	cout << "Enter the location of hotel :- ";
	cin >> loc;
	
	Hotel::setHotel_loc(loc);
	
	cout << endl << "Enter number of hotels :- ";
	cin >> n;
	
	Hotel ht[n];
	
	int id = 101, yr, rat, squan, rquan;
	string name, type; 
	
	for(i=0;i<n;i++)
	{
		cout << endl << "Hotel Id :- " << id << endl;
		cout << "Enter Hotel Name :- ";
		cin >> name;
		cout << "Enter Hotel's Establish Year :- ";
		cin >> yr;
		cout << "Enter Hotel Type (Hotel / Motel) :- ";
		cin >> type;
		cout << "Enter Hotel Rating :- ";
		cin >> rat;
		cout << "Enter Staff Quantity :- ";	
		cin >> squan;
		cout << "Enter Rooms Quantity :- ";
		cin >> rquan;
		
		ht[i].setHotel_Id(id);
		ht[i].setHotel_name(name);
		ht[i].setEst_yr(yr);
		ht[i].setHotel_type(type);
		ht[i].setH_rating(rat);
		ht[i].setStf_quan(squan);
		ht[i].setroom_quan(rquan);
		
		id++;
	}
	
	cout << endl << "Here is the data of hotels" << endl;
	
	for(i=0;i<n;i++)
	{
		cout << endl;
		cout << "===================================" << endl;
		ht[i].hotel_Info();
		cout << "===================================" << endl;
	}
		
	return 0;
}