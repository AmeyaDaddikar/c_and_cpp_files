#include <iostream>
using namespace std;
class CM;
class Metre
{
    private:
    int metres;
    public:
    friend CM add(Metre m, CM cm);
    void initialise()
    {
        cout<<"METRES=?\n";
        cin>>metres;
    }
    void print()
    {
        cout<<"Metres ="<<metres<<endl;
    }
};

class CM
{
  private:
    int cms;
    public:
    friend CM add(Metre m, CM cent);
    void initialise()
    {
        cout<<"CENTIMETRES=?\n";
        cin>>cms;
    }
    void print()
    {
        cout<<"CMS ="<<cms<<endl;
    }
};
CM add(Metre m, CM cent)
{
    CM ans;
    ans.cms=(m.metres)*100 + cent.cms;
    return ans;
}
int main()
{
    Metre m1;
    CM c1,c2;
    
    m1.initialise();
    c1.initialise();
    
    c2=add(m1,c1);
    
    m1.print();
    c1.print();
    c2.print();
    
    return 0;
}