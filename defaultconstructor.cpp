#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imag;
    public:
    Complex()
    {
        cout<<"Hello\n";
        real = imag = 0;
    }
    void display()
    {
        cout<<real<<"+j"<<imag<<endl;
    }
};
int main()
{
    Complex p;
    p.display();
    return 0;
}