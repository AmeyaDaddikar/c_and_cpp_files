#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char t;
    
    fstream file1;
    file1.open("textfile.txt", ios::out);
    
    file1<<"Hello\nBye\nAll\nyo\n";
    file1.close();
    
     char temp;
    fstream file;
    file.open("textfile.txt", ios::in);
    
    do
    {
        file.get(temp);
        cout<<temp;
        
    }while(!file.eof());
        file.close();
    return 0;
}