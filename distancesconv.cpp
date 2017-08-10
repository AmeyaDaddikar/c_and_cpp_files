#include <iostream>

using namespace std;
class DF
{
private:
    int f;
    int in;
public:
    DF()
    {
        f=0;
        in=0;
    }
    DF(const DF& obj)
    {
        f=obj.f;
        in=obj.in;
    }
    friend class DM;
    friend istream& operator >>(istream& ip, DF& d);
    friend ostream& operator <<(ostream& op, const DF& d);
};
class DM
{
private:
    int m;
    int cm;
public:
    DM()
    {
        m=0;
        cm=0;
    }
    DM(const DM& obj)
    {
        m=obj.m;
        cm=obj.cm;
    }
    friend istream& operator >>(istream& ip, DM& d);
    friend ostream& operator <<(ostream& op, const DM& d);
    operator DF()
    {
        DF temp;
        temp.f=m;
        temp.in=cm;
        return temp;
    }
};

int main()
{
   DM obj1;

   cin>>obj1;
    DF obj2=(DF)obj1;
   cout<<obj1;
   cout<<obj2;
    return 0;
}
istream& operator >>(istream& ip, DM& d)
{
    cout<<"Enter centimeters.\n";
    cin>>d.cm;
    d.m=d.cm/100;
    d.cm%=100;
    return ip;
}
ostream& operator <<(ostream& op, const DM& d)
{
    cout<<d.m<<"M "<<d.cm<<"CM "<<endl;
}
/////////////////////////////////////////
istream& operator >>(istream& ip, DF& d)
{
    cout<<"Enter inches.\n";
    cin>>d.in;
    d.f=d.in/12;
    d.in%=12;
    return ip;
}
ostream& operator <<(ostream& op, const DF& d)
{
    cout<<d.f<<"F "<<d.in<<"IN "<<endl;
}
