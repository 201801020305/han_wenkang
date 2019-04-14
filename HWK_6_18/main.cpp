#include <iostream>

using namespace std;


int integerPower(int base,int exponent)
{
    int result=1;
    for(unsigned int i=1;i<=exponent;i++)
    {
        result*=base;
    }
    return result;
}

int main()
{
    int x,y;
    cout<<"Enter base and exponent:\n";
    cin>>x>>y;
    cout << x<<"的"<<y<<"次方是"<<integerPower(x,y)<<endl;
    return 0;
}
