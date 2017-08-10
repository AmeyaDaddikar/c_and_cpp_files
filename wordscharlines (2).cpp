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
     char temp_cur,temp_prev=' ';
    fstream file;
    file.open("textfile.txt", ios::in);
    
    do
    {

        file.get(temp_cur);
        if((temp_prev==' '||temp_prev=='\n')&& (temp_cur!=' '&& temp_cur!='\n'))
            {
                words++;
                c++;
            }
        else if(temp_cur=='\n'&& temp_prev!='\n')
            lines++;
        else if(temp_cur!=' ' && temp_cur!='\n')
            c++;
        cout<<temp_cur;
        temp_prev=temp_cur;
    }while(!file.eof());
    cout<<words<<" WORDS "<<lines<<" LINES "<<c<<" CHARACTERS.\n";
        file.close();
    return 0;
}