#include <iostream>

using namespace std;

class A
{
  int a;
  public:
  A()
  {
      cout<<"DEFAULT OF A\n";
  }
  A(int x)
  {
      a=x;
  }
  void print()
  {
      cout<<a<<endl;
  }
};
class B: public A
{
  int b;
  public:
  B(int x,int y)//:A(x)
  {
      b=y;
  }
  B()
  {
      cout<<"DEFAULT OF B.\n";
  }
  void print()
  {
      cout<<b<<endl;
  }
};
class C: public B
{
  int c;
  public:
  C(int x, int y, int z)//:B(x,y)
  {
      c=z;
  }
  void print()
  {
      A::print();
      B::print();
      cout<<c<<endl;
  }
};

int main()
{
    C obj(4,5,6);
    obj.print();
    return 0;
}