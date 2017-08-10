#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;
    public :
        Complex(int x, int y)
        {
            real = x;
            imag = y;
        }
        Complex()
        {
            real=0;
            imag=0;
        }
    int operator >(Complex t)
    {
        if(real>t.real)
            return 1;
        else
            return 0;
    }
    Complex operator -(Complex num2)
    {
        Complex c;
        c.real= real - num2.real;
        c.imag= imag - num2.imag;
        return c;
    }

    void showdata()
        {
            cout<<"COMPLEX NUM= "<<real<<"+j "<<imag<<endl;
        }
    friend Complex operator +(Complex num1, Complex num2);
    //friend ostream operator <<(ostream o, Complex t);
};
int main()
{
    Complex a(2,3),b(4,5),c;
    if(a>b)
        c=a+b;
    else
        c=a-b;
    
    c.showdata();
    //cout<<c<<endl;
    return 0;
}
/*operator <<(ostream o, Complex t)
    {
        o<<t.real;
        o<<t.imag;
    }*/
Complex operator +(Complex num1, Complex num2)
{
 Complex c;
 c.real= num1.real + num2.real;
 c.imag= num1.imag + num2.imag;
 return c;
}
