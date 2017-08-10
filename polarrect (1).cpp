#include <iostream>
#include <math.h>
#define PI 3.1415
using namespace std;

class Polar
{
private:
    float rad;
    float theta;
    public:
    friend class Rect;
    void init()
    {
        cout<<"RAD=?\n";
        cin>>rad;
        cout<<"ANGLE=?\n";
        cin>>theta;
    }
    void print()
    {
        cout<<rad<<"+"<<theta<<"'"<<endl;
    }
};

class Rect
{
  private:
    float x;
    float y;
    
public:
    Rect subtract(Polar p1)
    {
        Rect r_ans;
        r_ans.x=x-p1.rad*cos(p1.theta*PI/180);
        r_ans.y=y-p1.rad*sin(p1.theta*PI/180);
        return r_ans;
    }
    void init()
    {
        cout<<"X=?\n";
        cin>>x;
        cout<<"Y=?\n";
        cin>>y;
    }
    void print()
    {
        cout<<x<<" i + "<<y<<" j"<<endl;
    }
};
int main()
{
    Rect r1,r2;
    Polar p1;
    
    r1.init();
    
    p1.init();

    r2=r1.subtract(p1);
    
    r1.print();
    r2.print();
    
    p1.print();
    
    return 0;
}