#include <iostream>
//4294967296
//
using namespace std;

long long int rev(long long int x)
{
    static long long int i = 0;
    
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
    cout<<rev(123456789012345678)<<endl;
    
    return 0;
}