#include<iostream>

using namespace std;

class Cars
{
	private:
		
		int cid, cyr;
		string comp, cclr, model; 
		
		
	public:
		
		void setCarid(int a)
		{
			cid = a;
		}
		
		void setCarbrand(string a)
		{
			comp = a;
		}
		
		void setcarColor(string a)
		{
			cclr = a;
		}
		
		void setCarmodel(string a)
		{
			model = a;
		}
		
		void setRelyr(int a)
		{
			cyr = a;
		}
		
		void carInfo()
		{
			cout << "Car ID :- " << cid << endl;
			cout << "Car Company :- " << comp << endl;
			cout << "Car Colour :- " << cclr << endl;
			cout << "Car Model :- " << model << endl;
			cout << "Car's Relese year :- " << cyr << endl;
		}
};

int main()
{
	Cars c1, c2, c3, c4;
	
	c1.setCarid(1079071571);
	c1.setCarbrand("Toyota");
	c1.setcarColor("White");
	c1.setCarmodel("Passo");
	c1.setRelyr(2021);
	c1.carInfo();
	
	cout << endl;
	
	c1.setCarid(1080125520);
	c1.setCarbrand("Suzuki");
	c1.setcarColor("White");
	c1.setCarmodel("Ravi");
	c1.setRelyr(2018);
	c1.carInfo();
	
	cout << endl;
	
	c1.setCarid(1076448625);
	c1.setCarbrand("Honda");
	c1.setcarColor("Black");
	c1.setCarmodel("City IDSI");
	c1.setRelyr(2004);
	c1.carInfo();
	
	cout << endl;
	
	c1.setCarid(1080832835);
	c1.setCarbrand("KIA");
	c1.setcarColor("Grey");
	c1.setCarmodel("Picanto");
	c1.setRelyr(2021);
	c1.carInfo();

	return 0;
}