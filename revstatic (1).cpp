#include <iostream>

using namespace std;

int rev(register int x)
{
    static int i = 0;
    
    if(x>0)
    {
        i*=10;
        i+=x%10;
        return rev(x/10);
    }
    else
        return i;
}

int main()
{
    cout<<rev(10230)<<endl;
    
    return 0;
}