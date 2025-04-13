#include<iostream>
using namespace std;
class deto
{
    int real,img;
    public:
        deto()
        {
            real=0;
            img=0;
        }
        void getvalue()
        {
            cout<<"Enter real value = ";
            cin>>real;
            cout<<"Enter img value = ";
            cin>>img;
        }
        friend deto operator +(comp e1,comp`e2);
        void show(deto c1)
        {
            if(img<0)
            {
                cout<<"the summ of two complex numbers are="<<real<<img<<endl;
            }
            else
            {
                cout<<"the summ of two complex numbers are="<<real<<"+"<<img<<endl;
            }
        }
};
deto operator +(comp e1,comp e2)
{
    deto xtra;
    xtra.real=e1.real+e2.real;
    xtra.img=e1.img+e2.img;
    return xtra;
}
int main()
{
    deto d1,d2,d3;
    d1.getvalue();
    d2.getvalue();
}
