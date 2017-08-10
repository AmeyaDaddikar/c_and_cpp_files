#include <iostream>

using namespace std;

class Person
{
  private:
  char name[20];
  int age;
  
  public:
  virtual void getDetails();
  virtual void showDetails();
};

class Student: public Person
{
    private:
    int marks;
    
    public:
    void getDetails();
    void showDetails();
};

class Teacher: public Person
{
  private:
  int exp;
  
  public:
  void getDetails();
  void showDetails();
};

class Staff: public Person
{
    private:
    char desig[20];
    
    public:
    void getDetails();
    void showDetails();
};
int main()
{
    Person* p[20];
    int i=0,opt;
    char rep;
    do
    {
        cout<<"CHOOSE 1.STUDENT 2.TEACHER 3.STAFF \n";
        cin>>opt;
        switch(opt)
        {
            case 1:
            p[i] = new Student();
            p[i++]->getDetails();
            break;
            case 2:
            p[i] = new Teacher();
            p[i++]->getDetails();
            break;
            case 3:
            p[i] = new Staff();
            p[i++]->getDetails();
            break;
            default:
            cout<<"INVALID ENTRY.\n";
            break;
        }
        cout<<"Enter another entry? Y/N \n";
        cin>>rep;
    }while(rep=='y');
    for(opt=0;opt<i;opt++)
        p[opt]->showDetails();
    return 0;
}
///////////////////////////////////////////////////////////
void Person::getDetails()
{
    cout<<"Enter name.\n";
    cin>>name;
    cout<<"ENter age.\n";
    cin>>age;
}
void Person::showDetails()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
////////////////////////////////////////////////////////////////
void Student::getDetails()
{
    Person::getDetails();
    cout<<"Enter marks.\n";
    cin>>marks;
}
void Student::showDetails()
{
    Person::showDetails();
    cout<<"Marks: "<<marks<<endl;
}
///////////////////////////////////////////////////////////////////
void Teacher::getDetails()
{
    Person::getDetails();
    cout<<"Enter experience.\n";
    cin>>exp;
}
void Teacher::showDetails()
{
    Person::showDetails();
    cout<<"Experience: "<<exp<<endl;
}
////////////////////////////////////////////////////////////////////
void Staff::getDetails()
{
    Person::getDetails();
    cout<<"Enter designation.\n";
    cin>>desig;
}
void Staff::showDetails()
{
    Person::showDetails();
    cout<<"Designation: "<<desig<<endl;
}