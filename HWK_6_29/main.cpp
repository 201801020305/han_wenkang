#include <iostream>

using namespace std;

bool primeNumber(int number)
{
    int factor=0,r=0;
    for(unsigned int i=1;i<=number;i++)
    {
        r=number%i;
        if(r==0)
            ++factor;
        if(factor>=3)
        {
            return false;
            break;
        }
    }
    if(factor==2)
        return true;

}
int main()
{
    int n=0;
    for(unsigned int i=2;i<=10000;++i)
    {
        if(primeNumber(i))
        {
            n++;
            cout<<i<<"\n";
        }
    }

}
