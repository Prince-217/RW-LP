#include<iostream>

using namespace std;


class RBI{
	
	public:
		
		float rate;
		
		void getROI(float a)
		{
			rate = a;
			cout << rate << "% Per Annum";
		}
		
		
};

class SBI : public RBI{
	
	public:
		
		void infoRoi()
		{
			cout << "SBI's Rate of Interest is :- ";
			getROI(3.05);
			cout << endl;
		}
		
};

class BOB : public RBI{
	
	public:
		
		void infoRoi()
		{
			cout << "BOB's Rate of Interest is :- ";
			getROI(7.05);
			cout << endl;
		}
		
};

class ICICI : public RBI{
	
	public:
		
		void infoRoi()
		{
			cout << "ICICI's Rate of Interest is :- ";
			getROI(6.5);
			cout << endl;
		}
		
};


int main()
{
	SBI a;
	BOB b;
	ICICI c;
	
	cout << "Here is the information...!!" << endl;

	a.infoRoi();
	b.infoRoi();
	c.infoRoi();
	
	
	return 0;
}