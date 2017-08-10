#include <iostream>
#include <fstream>

using namespace std;

class Complex
{
    private:
    int real;
    int imag;
    
    public:
    Complex();
    Complex(int,int);
    friend fstream& operator <<(fstream&,Complex&);
    friend fstream& operator >>(fstream&,Complex&);
    friend ostream& operator <<(ostream&,Complex&);
    friend istream& operator >>(istream&,Complex&);
};
int main()
{
    Complex t[10],u[10];
    int i=0;
    fstream TEXTFILE;
    
    TEXTFILE.open("complex.txt", ios:: out| ios::app);
    while(i<10)
    {
        cin>>t[i];
        TEXTFILE<<t[i++];
    }
    TEXTFILE.close();
    
    fstream READFILE;
    READFILE.open("complex.txt", ios::in);
    for(i=0;i<20;i++)
    {
        READFILE>>u[i];
        cout<<u[i];
    }
    
    READFILE.close();
    return 0;
}

fstream& operator >>(fstream& file,Complex& c)
{
    char temp;
    file>>c.real;
    //file.get(temp);
    file>>c.imag;
    return file;
}
fstream& operator <<(fstream& file,Complex& c)
{
    file<<c.real<<endl<<c.imag<<endl;
    return file;
}
ostream& operator <<(ostream& out,Complex&c)
{
    cout<<c.real<<" "<<c.imag<<endl;
    return out;
}
istream& operator >>(istream& in,Complex& c)
{
    cout<<"REAL=?"<<endl;
    cin>>c.real;
    cout<<"IMAG=?"<<endl;
    cin>>c.imag;
    return in;
}
Complex::Complex()
    {
        real=0;
        imag=0;
    }
Complex::Complex(int x, int y)
    {
        real = x;
        imag = y;
    }