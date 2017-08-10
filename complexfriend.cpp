#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    friend Complex add(Complex a, Complex b);
    void initialize()
    {
        cout<<"Real=?\n";
        cin>>real;
        cout<<"Imaginary=?\n";
        cin>>imag;
    }
    void print()
    {
        cout<<real<<"+j "<<imag<<endl;
    }
};
Complex add(Complex a, Complex b)
{
    Complex x;
    x.real=a.real+b.real;
    x.imag=a.imag+b.imag;
    return x;
}
int main()
{
    Complex num1, num2, num3;
    num1.initialize();
    num2.initialize();

    num3 = add(num1,num2);
    
    num1.print();
    num2.print();
    num3.print();
    return 0;
}