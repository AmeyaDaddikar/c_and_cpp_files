#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream TEXTFILE;
    TEXTFILE.open("textexam.txt");

    TEXTFILE<<"World\n";
    //TEXTFILE<<'~';
    TEXTFILE.close();

    ifstream READFILE;
    READFILE.open("textexam.txt");
    int i=0;
    char temp_prev = ' ';
    char temp_cur;
    char output[50]={0};
    //READFILE.getline(output,20);
    //cout<<output;
    //while(READFILE)
    //READFILE.seekg(2,ios::cur);
    //READFILE.seekg(-5,ios::end);
    //READFILE.get(temp_cur);
    //cout<<temp_cur<<endl<<"?????"<<endl;
   /* while(READFILE.get(temp_cur))
    {
        //cout<<temp_cur<<endl;
        cout<<READFILE.tellg()<<endl;
        READFILE.seekg(2,ios::cur);
        
    }*/
    READFILE.seekg(0,ios::end);
    //cout<<READFILE.tellg()<<" ";
    //READFILE.seekg(-2,ios::cur);
    //cout<<READFILE.tellg()<<" ";
    //READFILE.get(temp_cur);
    //cout<<temp_cur<<endl;
    
    //cout<<READFILE.tellg()<<" ";
   while(READFILE.tellg()>1)
    {
        
        READFILE.seekg(-2,ios::cur);
        READFILE.get(temp_cur);
        cout<<READFILE.tellg()<<" ";
        cout<<temp_cur<<endl;
    }
    
    //cout<<output<<endl;
    READFILE.close();
    return 0;
}
