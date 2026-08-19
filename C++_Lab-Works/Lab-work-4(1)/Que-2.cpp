#include<iostream>

using namespace std;

class Celsius {
	
	public:
		float ctemp;
		
		void setTemp(float a)
		{
			ctemp = a;
			cout << "Teperature in celsius :- " << ctemp << endl;
		}
		
};

class Fahrenhit : public Celsius{

	public:
		
		float ftemp;
		
		void getFahrenhit()
		{
			ftemp = (ctemp * (9.0/5))+32;	
			cout << "Temperature in fahreheit :- " << ftemp << endl;
		}
		

};

class Kelvin : public Fahrenhit{

	public:
		
		float ktemp;
		
		void getKelvin()
		{
			
			ktemp = ((ftemp - 32)*(5.0/9)) + 273.15;
			
			cout << "Tmperature in kelvin :- " << ktemp;
		}
		
};

int main() {

	float otemp;

	Celsius c;
	Fahrenhit f;
	Kelvin k;
	
	cout << "Enter temperature in celsius :- ";
	cin >> otemp;
	
	k.setTemp(otemp);
	cout << endl;
	k.getFahrenhit();
	cout << endl;
	k.getKelvin();
	
	return 0;
}