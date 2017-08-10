#include <iostream>

using namespace std;

class Academic
{
    protected:    
    int marks[10];
    int acad_grade();
    void getMarks()
    {
        int i;
        cout<<"Enter marks.\n";
        for(i=0;i<10;i++)
            cin>>marks[i];
    }
};

class Sport
{
    protected:
    char grade;
    int sport_grade();
    void getGrade()
    {
        cout<<"Enter grade.\n";
        cin>>grade;
    }
};

class StudentReport: public Academic, public Sport
{
    private:
    int overall_grade;
    char name[20];
    int std;
    
    public:
    void getDetails()
    {
        cout<<"Enter the name.\n";
        cin.getline(name,20);
        cout<<"Enter the standard.\n";
        cin>>std;
        getMarks();
        getGrade();
    }
    void calc_grade()
    {
        overall_grade=acad_grade()+sport_grade();
    }
    
    void showDetails()
    {
        cout<<"NAME: "<<name<<endl;
        cout<<"STD: "<<std<<endl;
        calc_grade();
        cout<<"Overall grade: "<<overall_grade;
    }
};

int main()
{
    StudentReport r;
    r.getDetails();
    r.showDetails();
    return 0;
}
int Sport:: sport_grade()
{
    switch(grade)
    {
        case 'A':
        return 50;
        case 'B':
        return 40;
        case 'C':
        return 30;
        case 'D':
        return 20;
        case 'E':
        return 10;
        defalut:
        return 0;
    }
}
int Academic::acad_grade()
{
    int i,temp=0;
    for(i=0;i<10;i++)
        temp+=marks[i];
    return temp;
}