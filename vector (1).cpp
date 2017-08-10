#include<iostream>
using namespace std;
/*
vector is an array of values
*/

class Vector
{
private:
    int *v;
    int num;
  
public:
    friend istream& operator >> (istream &ip,Vector &vec);
    friend ostream& operator << (ostream &op,Vector vec);
    Vector operator * (int intg)
    {
        Vector temp=*this;
        int i;
        for(i=0;i<num;i++)
            temp.v[i]*=intg;
        return temp;
    }
    Vector operator / (int intg)
    {
        Vector temp=*this;
        int i;
        for(i=0;i<num;i++)
            temp.v[i]/=intg;
        return temp;
    }
    ~Vector()
        {
            delete []v;
        }
    Vector()
    {
        num = 0;
        v = NULL;
    }
    Vector(const Vector &obj)
    {
        num=obj.num;
        v = new int [num];
        int i;
        for(i=0;i<num;i++)
            v[i]=obj.v[i];
    }
};
int main()
{
    Vector x;
    cin>>x;
    Vector y=x*10;
    Vector z=y/5;
    cout<<x<<y<<z;
    return 0;
}
istream& operator >> (istream &ip,Vector &vec)
{
    cout<<"Enter the number of entries.\n";
    ip>>vec.num;
    cout<<"Enter the entries.\n";
    int i;
    vec.v = new int [vec.num];
    for(i=0;i<vec.num;i++)
        ip>>vec.v[i];
    return ip;
}
ostream& operator << (ostream &op,Vector vec)
{
    cout<<"Entries are\n";
    int i;
    for(i=0;i<vec.num;i++)
        op<<vec.v[i]<<endl;
    return op;
}
