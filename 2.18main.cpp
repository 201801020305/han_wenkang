#include <iostream>

using namespace std;

int main()
{
    int number1=0,number2=0;
    cout<<"Enter two integer:\n";
    cin>>number1>>number2;
    if(number1>number2)
        cout<<number1<<" is large.";
    if(number1<number2)
        cout<<number2<<" is large.";
    if(number1==number2)
        cout<<"these numbers are equal.";
    return 0;
}
