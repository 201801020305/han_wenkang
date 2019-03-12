//homework2.19----Han_Wenkang
#include <iostream>

using namespace std;

int main()
{
    int number1=0,number2=0,number3=0,sum=0,product=0,largest=0,smallest=0;
    double average=0;
    cout << "Input three different integers: ";
    cin >> number1>>number2>>number3;
    sum=number1+number2+number3;
    average=sum/3;
    product=number1*number2*number3;
    if(number1>number2)
        largest=number1;
        smallest=number2;
    if(number1<number2)
        largest=number2;
        smallest=number1;
    if(number3>largest)
        largest=number3;
    if(number3<smallest)
        smallest=number3;
    cout<<"Sum is "<<sum<<"\nAverage is "<<average<<"\nProduct is "<<product<<"\nSmallest is "<<smallest<<"\nLargest is "<<largest<<endl;

    return 0;
}
