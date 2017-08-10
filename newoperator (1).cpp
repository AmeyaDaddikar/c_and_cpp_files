#include<iostream>
using namespace std;

int main()
{
    int** matrix;
    int rows, cols;
    int i,j;
    cout<<"Enter the number of rows.\n";
    cin>>rows;
    
    cout<<"Enter the number of columns.\n";
    cin>>cols;
    
    matrix = new int* [rows];
    
    for(i=0;i<rows;i++)
        matrix[i] = new int [cols] ;
    
    cout<<"Enter the elements.\n";
    
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            cin>>matrix[i][j];
    
    cout<<"Entered matrix is \n";
    
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            cout<<matrix[i][j]<<"  ";
        
        cout<<endl;
    }
     cout<<"MEMORY IS BEING DELETED.\n";   
        
    for(i=0;i<rows;i++)
        delete []matrix[i] ;
    delete []matrix;
    return 0;
}