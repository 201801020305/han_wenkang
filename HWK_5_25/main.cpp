#include <iostream>

using namespace std;

int main()
{
    unsigned int count=1,breaksign = 1;
    for(count=1;count<=10&&breaksign!=2;++count)
    {
        if(count==4)
            breaksign++;
        cout<<count<<" ";

    }
    cout<<"\nBroke out of loop at count = "<<count<<endl;
}
