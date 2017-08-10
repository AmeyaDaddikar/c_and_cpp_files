#include <iostream>
#include <fstream>

using namespace std;

struct Memo
{
private:
	int dd;
	int mm;
	int yyyy;
	char reminder[200];
public:
	friend ofstream& operator <<(ofstream &, Memo&);
	friend ifstream& operator >>(ifstream &, Memo &);
	void showdata()
	{
		cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
		cout<<reminder<<endl;
	}
};
int main()
{
ofstream outFile;
ifstream inFile;
Memo m;
string inp;
char repeat;
int opt;

do
{
cout<<"CHOOSE ONE OF THE FOLLOWING.\n";
cout<<"1. WRITE A STRING IN THE FILE.\n";
cout<<"2. GET A STRING FROM THE FILE.\n";
cout<<"3. WRITE A MEMO.\n";
cout<<"4. READ A MEMO.\n";
cin>>opt;
cin.ignore();
switch(opt)
{
case 1:
	outFile.open("output.txt");
	cout<<"Enter the text.\n";
	getline(cin,inp);
	outFile.width(21);
	outFile<<inp<<endl;
		
	outFile.close();
	break;
case 2:
	inFile.open("input.txt");
	getline(inFile,inp);
	inFile.close();
	cout<<inp<<endl;
	break;
case 3:
	outFile.open("outputdate.txt");
	outFile<<m;
	outFile.close();
	break;
case 4:
	inFile.open("outputdate.txt");
	inFile>>m;
	inFile.close();
	m.showdata();
	break;
}

cout<<"WANT TO CHOOSE ANOTHER OPTION? Y?N \n";
cin>>repeat;
}while(repeat=='y');
return 0;
}
ofstream& operator <<(ofstream &op, Memo& m)
{
	op.setf(ios::left,ios::adjustfield);	
	cout<<"Enter date in format DD/MM/YYYY .\n";
	
	cin>>m.dd;
	op<<m.dd;

	cin>>m.mm;
	op<<"/";
	op<<m.mm;

	cin>>m.yyyy;
	op<<"/";
	op<<m.yyyy;
	
	cout<<"Enter the memo description.\n";
	cin.ignore();
	cin.getline(m.reminder,200);
	op<<endl<<m.reminder;
	
	return op;

}
ifstream& operator >>(ifstream &ip, Memo &m)
{
	ip>>m.dd;
	ip.seekg(1,ios::cur);
	ip>>m.mm;
	ip.seekg(1,ios::cur);
	ip>>m.yyyy;
	ip.seekg(1,ios::cur);
	ip.getline(m.reminder,200);
return ip;
}
