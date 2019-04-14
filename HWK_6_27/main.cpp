#include <iostream>

using namespace std;

double minimum(double number1,double number2,double number3)
{
    int smallest=number1;
    if(number2<number1)
    {
        if(number2<number3)
        smallest=number2;
        else
        smallest=number3;
    }
    else
        if(number3<number1)
        smallest=number3;

    return smallest;


}

int main()
{
    double a,b,c;
    cout<<"Enter three numbers to find the smallest one:\n";
    cin>>a>>b>>c;

    cout<<"The smallest number is: "<<minimum(a,b,c)<<endl;
}
