#include <iostream>

using namespace std;

int fact(int x)
{
    static int i = x;
    static int j = 1;
    if(i>=1)
        {
            j*=i;   
            i--;
            return fact(i);
        }
    else
        return j;
}


int main()
{
    cout<<fact(4)<<endl;
    
    return 0;
}