#include <iostream>

using namespace std;

bool multiple(int number1,int number2)
{
    int r=0;
    r=number2%number1;

    if(r==0)
        return true;
    else
        return false;
}

int main()

{
    int x,y;
    cout<<"Enter x and y:\n";
    cin>>x>>y;

    if(multiple(x,y))
        cout<<"y is multiple of x.";
    else
        cout<<"y is not multiple of x.";
}
