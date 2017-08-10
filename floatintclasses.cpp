#include <iostream>
using namespace std;


class INT{
private:
  int in;
public:
    friend class FLOAT;
    INT()
    {
        in=0;
    }
    INT(int x)
    {
        in=x;
    }
    INT(const INT& obj)
    {
        in=obj.in;
    }
    friend ostream& operator <<(ostream& op, const INT& out);
};
class FLOAT{
  
private:
  float fl;
public:
    FLOAT()
    {
        fl=0;
    }

    FLOAT(float x)
    {
        fl=x;        
    }
    
    FLOAT(const FLOAT& obj)
    {
        fl=obj.fl;
    }
    
    friend ostream& operator <<(ostream& op, const FLOAT& out);
    FLOAT operator ++()
    {
        fl+=1;
        return *this;
    }
    FLOAT operator --(int x)
    {
        FLOAT temp = *this;
        fl-=1;
        return temp;
    }
    int operator >(int x)
    {
        if(fl>x)
            return 1;
        return 0;
    }
    FLOAT operator /(INT num)
    {
        FLOAT temp;
        temp.fl=fl/num.in;
        return temp;
    }
    
    operator INT()
    {
        INT temp;
        temp.in=fl;
        return temp;
    }
    
};

int main()
{
    FLOAT x=34.5;
    INT y=x;
    FLOAT z=x/y;
    if(z>40)
        ++x;
    else 
        x--;
    cout<<x<<y<<z;
    
    return 0;
}
ostream& operator <<(ostream& op, const FLOAT& out)
{
    cout<<out.fl<<endl;
    return op;
}

ostream& operator <<(ostream& op, const INT& out)
{
    cout<<out.in<<endl;
    return op;
}