#include<iostream>
using namespace std;

class Calculator
{
    public :
        void calculate(double a, double b)
        {
            cout << a / b << endl;
        }

        void calculate(int a, int b, int c)
        {
            cout << a - b - c << endl;
        }

        void calculate(int a, int b, int c, int d)
        {
            cout << a*b*c*d << endl;
        }

        void calculate(int a, int b, int c, int d, int e)
        {
            cout << a+b+c+d+e << endl;
        }



};


int main()
{
    Calculator cal;

    cal.calculate(10.0, 2.0);
    cal.calculate(8,3,4);
    cal.calculate(1,2,3,4);
    cal.calculate(1,2,3,4,5);
    
    return 0;
}

