//homework2.23----Han_Wenkang
#include <iostream>

using namespace std;

int main()
{
    int number1=0,number2=0,number3=0,number4=0,number5=0,a=0,b=0;
    cout << "Enter 5 integers:\n" << endl;
    cin >> number1>>number2>>number3>>number4>>number5;
    if(number1>number2)
        a=number1;
    if(number1<=number2)
        a=number2;
    if(number3>a)
        a=number3;
    if(number4>a)
        a=number4;
    if(number5>a)
        a=number5;

    if(number1<number2)
        b=number1;
    if(number1>=number2)
        b=number2;
    if(number3<b)
        b=number3;
    if(number4<b)
        b=number4;
    if(number5<b)
        b=number5;

    cout<<"The largest integer is "<<a<<"\nThe smallest integer is "<<b<<endl;
    return 0;
}
