#include<iostream>

using namespace std;

class Customer{
	
	private:
		
		int cid, cage, cmo, csimval;
		string cname, ccity, ctelname;
		
	public:
		
		void setCust_id (int a)
		{
			cid = a;
		}
		
		void setCust_name(string a)
		{
			cname = a;
		}
		
		void setCust_age(int a)
		{
			cage = a;
		}
		
		void setCust_city(string a)
		{
			ccity = a;
		}
		
		void setCust_mob_no(int a)
		{
			cmo = a;
		}
		
		void setCust_sim_val(int a)
		{
			csimval = a;
		}
		
		void setCust_tel_brand(string a)
		{
			ctelname = a;
		}
		
		void cust_Info()
		{
			cout <<"Customer ID :- "<< cid << endl;
			cout <<"Customer Name :- "<< cname << endl;
			cout <<"Customer Age :- "<< cage << endl;
			cout <<"Customer City :- "<< ccity << endl;
			cout <<"Customer Mobile Number :- "<< cmo << endl;
			cout <<"Customer Sim Validity :- "<< csimval <<" yr"<< endl;
			cout <<"Customer telecom brand's name :- "<< ctelname << endl;
		}
	
};


int main()
{

	Customer c1, c2, c3, c4, c5;
	
	c1.setCust_id(101);
	c1.setCust_name("Rohan Mehta");
	c1.setCust_age(21);
	c1.setCust_city("Surat");
	c1.setCust_mob_no(9876541230);
	c1.setCust_sim_val(2);
	c1.setCust_tel_brand("Jio");
	c1.cust_Info();
	
	cout << endl;
	
	c2.setCust_id(102);
	c2.setCust_name("Kavya Shah");
	c2.setCust_age(24);
	c2.setCust_city("Ahmedabad");
	c2.setCust_mob_no(9123456789);
	c2.setCust_sim_val(3);
	c2.setCust_tel_brand("Airtel");
	c2.cust_Info();
	
	cout << endl;
	
	c3.setCust_id(103);
	c3.setCust_name("Amit Patel");
	c3.setCust_age(29);	
	c3.setCust_city("Rajkot");
	c3.setCust_mob_no(9988776622);
	c3.setCust_sim_val(1);
	c3.setCust_tel_brand("VI");
	c3.cust_Info();
	
	cout << endl;
	
	c4.setCust_id(104);
	c4.setCust_name("Neha Joshi");
	c4.setCust_age(26);
	c4.setCust_city("Vadodara");
	c4.setCust_mob_no(9090909090);
	c4.setCust_sim_val(4);
	c4.setCust_tel_brand("BSNL");
	c4.cust_Info();
	
	cout << endl;
	
	c5.setCust_id(105);
	c5.setCust_name("Yash Trivedi");
	c5.setCust_age(23);
	c5.setCust_city("Bhavnagar");
	c5.setCust_mob_no(9812345678);
	c5.setCust_sim_val(2);
	c5.setCust_tel_brand("Jio");
	c5.cust_Info();
	return 0;	
}