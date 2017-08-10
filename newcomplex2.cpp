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
        Complex()
        {
            cout<<"Don't use default constructor.\n";
        }
        Complex(int x, int y)
        {
            real = x;
            imag = y;
        }
};

int main()
{
    int x,y,i,num;
    cin>>num;
    Complex **c = new Complex* [num] ;
    for(i=0;i<num;i++)
    {
        c[i]=new Complex(0,0);
        c[i]->putdata();
    }
    
    for(i=0;i<num;i++)
        c[i]->showdata();
        
    for(i=0;i<num;i++)
        delete c[i];
    delete c;
    return 0;
}