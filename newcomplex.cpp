#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;
    
    public:
        void putdata()
        {
            cout<<"Enter real part.\n";
            cin>>real;
            cout<<"Enter imaginary part.\n";
            cin>>imag;
        }
        void showdata()
        {
            cout<<"COMPLEX NUM= "<<real<<"+j "<<imag<<endl;
        }
        Complex(int x, int y)
        {
            real = x;
            imag = y;
        }
};

int main()
{
    Complex *c = new Complex(2,3) ;
    //c->putdata();
    c->showdata();
    
    delete c;
    return 0;
}