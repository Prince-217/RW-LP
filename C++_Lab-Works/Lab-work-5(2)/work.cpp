#include<iostream>
using namespace std;


class Compare
{
    private:
        int value;
    public:
        void setvalue(int a)
        {
            value = a;
        }

        int getvalue()
        {
            return value;
        }

        bool operator<(Compare &obj)
        {
            return this->value < obj.value;
        }
};


int main()
{
    Compare obj1, obj2;

    obj1.setvalue(7);
    obj2.setvalue(10);

    if(obj1 < obj2)
    {
        cout << "Object 2 is higher...!!" << endl;
    }
    else
    {
        cout << "Object 1 is higher...!!" << endl;
    }

    return 0;
}
