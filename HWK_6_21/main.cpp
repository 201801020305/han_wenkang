#include <iostream>

using namespace std;

bool iseven(int number)
{
    int r=0;
    r=number%2;
    if(r==0)
        return true;
    else
        return false;
}

int main()
{
    int integer=0;
    cout<<"Enter integers:\n";
    for(int i=1;i<=3;++i)
    {
        cin>>integer;
        if(iseven(integer))
            cout<<"This integer is a even number.\n\n";
        else
            cout<<"This integer isn't a even number.\n\n";
    }
}
