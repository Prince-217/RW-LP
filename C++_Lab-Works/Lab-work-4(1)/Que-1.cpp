#include<iostream>

using namespace std;

class X{
	
	public:
		int a, b ,c;
	
};

class Y : public X{							// Single Inheritance....!!
	
	public:
		
		void setData(int n1, int n2, int n3)
		{
			a = n1;
			b = n2;
			c = n3;
		}
		
		void getData()
		{
			cout << a*a*a << endl;
			cout << b*b*b << endl;
			cout << c*c*c << endl;
		}
};


int main()
{
	
	int p, q, r;
	
	Y ytemp;
	
	cout << "Enter Number 1 :- ";
	cin >> p;
	cout << "Enter Number 2 :- ";
	cin >> q;
	cout << "Enter Number 3 :- ";
	cin >> r;
	
	ytemp.setData(p,q,r);
	
	cout << endl << endl << "Here is the cube of all numbers...!!" << endl;
	
	ytemp.getData();
	return 0;
}