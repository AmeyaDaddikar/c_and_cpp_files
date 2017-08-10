#include <iostream>
using namespace std;
class Book
{
private:    
    char name[50];
    char author[50];
    float price;
    int id;
    static int id_count;
    static int book_count;
    
public:
    static int new_id()
    {
        book_count++;
        return id_count++;
    }
    static void tot_books()
    {
        cout<<"Total registered books = "<<book_count<<endl;
    }
    void initialise();
    void print();
    
};
int Book :: id_count=1100;
int Book :: book_count=0;

int main()
{
    Book b1,b2,b3;
    
    b1.initialise();
    b2.initialise();
    b3.initialise();
    
    cout<<"BOOKS IN THE STORE \n";
    
    b1.print();
    b2.print();
    b3.print();
    
    Book::tot_books();
    return 0;
}

void Book :: initialise()
{
    cout<<"Enter book name.\n";
    cin>>name;
    cout<<"Enter author name.\n";
    cin>>author;
    cout<<"Enter book price.\n";
    cin>>price;
    id=new_id();
}
void Book :: print()
{
    cout<<"NAME   :"<<name<<endl;
    cout<<"AUTHOR :"<<author<<endl;
    cout<<"ID     :"<<id<<endl;
    cout<<"PRICE  :"<<price<<endl;
}
