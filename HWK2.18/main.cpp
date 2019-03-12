//homework2.18----Han_Wenkang
#include <iostream>

using namespace std;

int main()
{
    int number1=0,number2=0;
    cout<<"Enter two interges:";
    cin>>number1>>number2;
    if(number1>number2)
        cout<<number1<<"is lager";
    if(number2>number1)
        cout<<number2<<"is lager";
    if(number1==number2)
        cout<<"These numbers are equal";
}
