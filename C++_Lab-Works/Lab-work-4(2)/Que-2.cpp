#include<iostream>

using namespace std;

class A{
	
		//	Private: Accessible only within the same class.
		//	Protected: Accessible within the class and its derived classes but not outside the class.


	protected:									
												
		int a;
	
	public:
		
		A(int x)
		{
			a = x;
		}
};

class B : public A{
	
	protected:
		int b;
	
	public:
		
		B(int x, int y) : A(x)
		{
			b = y;
		}
};

class C{
	
	protected:
		int c;
		
	public:
		
		C(int z)
		{
			c = z;
		}
	
};

class D : public B, public C{
	

	int d;
		
	public:
		
		D(int w, int x, int y, int z) : B(x,y), C(z)
		{
			
			d = w;
		}
		
		void sumNum()
		{
			cout << "Sum :- " << a+b+c+d;
		}
};


int main()
{
	D obj(1,2,3,4);
	
	obj.sumNum();
	
	return 0;
}