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
        Complex(const Complex& obj)
        {
            real=obj.real;
            imag=obj.imag;
        }
        ~Complex()
        {
            
        }
    Complex operator -(Complex num2)
    {
        Complex c;
        c.real= real - num2.real;
        c.imag= imag - num2.imag;
        return c;
    }
    friend Complex operator +(Complex num1, Complex num2);
    friend Complex operator += (Complex &num1, Complex num2);
    friend Complex operator -= (Complex &num1, Complex num2);
    friend Complex operator -(Complex p);
    friend Complex operator --(Complex &p);
    friend Complex operator --(Complex &p,int x);
    friend Complex operator ++(Complex &p);
    friend ostream& operator << (ostream &op,Complex vec);
    
    int operator >(Complex t)
    {
        if(real>t.real)
            return 1;
        else
            return 0;
    }
    
    void showdata()
        {
            cout<<"COMPLEX NUM= "<<real<<"+j "<<imag<<endl;
        }
    
    //friend ostream operator <<(ostream o, Complex t);
};
int main()
{
    Complex x(5,3);
    Complex y=-x;
    Complex z=--x;
    Complex w=z--;
    cout<<x<<y<<z<<w<<endl;
    
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
Complex operator += (Complex &num1, Complex num2)
{
    num1=num1+num2;
    return num1;   
}
Complex operator -= (Complex &num1, Complex num2)
{
    num1=num1-num2;
    return num1;
}
Complex operator -(Complex p)
{
    Complex t=p;
    t.real*=-1;
    t.imag*=-1;
    return t;
}
Complex operator --(Complex &p)
{
    --p.real;
    --p.imag;
    ;
    return p;
}
Complex operator --(Complex &p, int x)
{
    Complex t=p;
    p.real--;
    p.imag--;
    return t;
}
Complex operator ++(Complex &p)
{
    ++p.real;
    ++p.imag;
    return p;
}    
ostream& operator << (ostream &op,Complex vec)
{
    vec.showdata();
    return op;
}
