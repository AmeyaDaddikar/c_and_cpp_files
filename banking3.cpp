#include <iostream>
using namespace std;

class Custormer
{
private:
    char cust_name[50];
    int age;
    int phone;
    float balance;
    int acc_num;
public:
    void init_cust();
    void print_cust();
    void changephone();
};
class Bank
{
private:
    char bank_name[50];
    char branch[50];
  Customer cust[100];
    int cust_num;
public:
    void init_bank();
    void print_bank();
    void deposit();
    void withdraw();
    void search_by_acc();
    void print_by_pnum();
};
int main()
{
    
    return 0;
}
void Customer :: init_cust()
{
    cout<<"Enter account number.\n";
    cin>>acc_num;
    cout<"Enter name.\n";
    cin>>cust_name;
    cout<<"Enter age\n";
    cin>>age;
    cout<<"Enter phone number.\n";
    cin>>phone;
    cout<<"Enter initial balance.\n";
    cin>>balance;
}
void Customer :: print_cust()
{
    cout<<"A/C NUMBER:"<<acc_num<<endl;
    cout<<"NAME      :"<<cust_name<<endl;
    cout<<"AGE       :"<<age<<endl;
    cout<<"PHONE NUM :"<<phone<<endl;
    cout<<"BALANCE   :"<<balance<<endl;
}
void Customer :: changephone()
{
    int temp_num;
    cout<<"Enter the new phone number.\n";
    cin>>temp_num;
    phone=temp_num;
    cout<<"Phone number changed to "<<phone<<endl;
}
void Bank :: init_bank()
{
    cout<<"Enter bank name.\n";
    cin>>bank_name;
    cout<<"Enter branch.\n";
    cin>>branch;
}
void Bank :: print_bank()
{
    cout<<"Bank name:"<<bank_name<<endl;
    cout<<"Branch   :"<<branch<<endl;
}