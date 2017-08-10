#include <iostream>

using namespace std;

class Complex
{
    int real;
    int imag;
    
    public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    friend istream& operator >> (istream&,Complex& );
    friend ostream& operator << (ostream&,const Complex& );
    
    Complex operator + (Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

template <typename T>
T add(T a, T b)
{
    return a+b;
}

int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
    cout<<add<int>(1,2)<<endl;
    cout<<add<Complex>(c1,c2)<<endl;
    
    return 0;
}
istream& operator >> (istream& in,Complex& c)
{
    in>>c.real;
    in>>c.imag;
    return in;
}
ostream& operator << (ostream& out,const Complex& c)
{
    out<<c.real<<"+j"<<c.imag<<endl;
    return out;
}
    