#include <iostream>
#include <string.h>
using namespace std;

class Car
{
  private:
  char cmp_name[20];
  
  public:
  Car();
  Car(char* name);
  void print()
  {
      cout<<cmp_name<<endl;
  }
   
};

class MechCar: public virtual Car
{
    private:
    int gears;
    public:
    MechCar();
    MechCar(char* name, int ip_gears);//:Car(name);
    void print()
    {
      cout<<gears<<endl;
    }
    
};

class ElecCar: public virtual Car
{
  private:
  int bttry_life;
  
  public:
  ElecCar();
  ElecCar(char* name, int ip_bttry_life);//:Car(name);
    void print()
    {
      cout<<bttry_life<<endl;
    }
    
};

class HybridCar: public MechCar, public ElecCar
{
    private:
    int no_of_hrs;
    
    public:
    HybridCar();
    HybridCar(char* name, int ip_gears, int ip_bttry_life, int ip_no_hrs);//;:MechCar(name,ip_gears),ElecCar(name,ip_bttry_life);
    void print()
    {
      Car::print();
      ElecCar::print();
      MechCar::print();
      cout<<no_of_hrs<<endl;
     }
    
};


int main()
{
    char name[20]={"HELLO"};
    HybridCar a(name,1,2,3);
    a.print();
    return 0;
}

Car::Car()
{
  strcpy(cmp_name,"");
  //cout<<"Is default being called?";
}
Car::Car(char* name)
{
    cout<<"Check again";
    strcpy(cmp_name,name);
    cout<<cmp_name<<"In base ";
}


MechCar::MechCar()
{
    gears=0;
}
MechCar::MechCar(char* name, int ip_gears):Car(name)
{
    gears=ip_gears;
    cout<<"MECHCAR\n";
}


ElecCar::ElecCar()
{
    bttry_life=0;
}
ElecCar::ElecCar(char* name, int ip_bttry_life):Car(name)
{
    bttry_life=ip_bttry_life;  
    cout<<"ELECCAR\n";
}


HybridCar::HybridCar()
{
    no_of_hrs=0;
}
HybridCar::HybridCar(char* name, int ip_gears, int ip_bttry_life, int ip_no_hrs):Car(name),MechCar(name,ip_gears),ElecCar(name,ip_bttry_life)
{
    no_of_hrs=ip_no_hrs;
}