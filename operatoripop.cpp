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
    Complex operator -(Complex num2)
    {
        Complex c;
        c.real= real - num2.real;
        c.imag= imag - num2.imag;
        return c;
    }
    friend istream& operator >>(istream &get,Complex &a);
    friend ostream& operator <<(ostream &put, Complex a);
    friend Complex operator +(Complex num1, Complex num2);
    friend Complex operator += (Complex &num1, Complex num2);
    friend Complex operator -= (Complex &num1, Complex num2);
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
    Complex a(5,3),b(4,5),c;
    cin>>a;
    cin>>b;
    if(a>b)
        a+=b;
    else
        a-=b;
    a.showdata();
    cout<<b<<endl;
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
istream& operator >>(istream &get, Complex &a)
    {
        get >> a.real;
        get >> a.imag;
        return get ;
    }
ostream& operator <<(ostream &put, Complex a)
    {
        put << a.real<<endl;
        put << a.imag<<endl;
        return put ;
    }