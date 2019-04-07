#include <iostream>

using namespace std;

int main()
{
    int i=1,accuracy=0,factorial=1;
    double e=1,numerator=1,x=0;
    cout<<"Enter the power(x) of e^x: ";
    cin>>x;
    cout<<"Enter the accuracy of e: ";
    cin>>accuracy;


    while(i<accuracy)
    {
        factorial*=i;

        numerator*=x;
        e+=numerator/factorial;
        i++;
    }

    cout<<"e="<<e<<endl;
}
