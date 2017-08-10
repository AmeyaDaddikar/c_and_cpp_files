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
    int lines=0,words=0,c=0;
     char temp;
    fstream file;
    file.open("textfile.txt", ios::in);
    
    do
    {
        
        file.get(temp);
        if(temp=='\n')
            {
                words++;
                lines++;
            }
        else if(temp==' ')
            words++;
        else
            c++;
        cout<<temp;
        
    }while(!file.eof());
    cout<<words<<" WORDS "<<lines<<" LINES "<<c<<" CHARACTERS.\n";
        file.close();
    return 0;
}