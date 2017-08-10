#include <iostream>

using namespace std;

class Base
{
    public:
    void get()
    {
        cout<<"Base.\n.";
    }
};

class Derived : public Bse
{
  public:
  void get()
    {
        cout<<"Base.\n.";
    }
};
int main()
{
    return 0;
}