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
};
int main()
{
    Complex t(2,3),u;
    fstream TEXTFILE;
    
    TEXTFILE.open("complex.txt", ios:: out);
    TEXTFILE<<t;
    
    TEXTFILE.close();
    
    fstream READFILE;
    READFILE.open("complex.txt", ios::in);
    READFILE>>u;
    cout<<u;
    
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