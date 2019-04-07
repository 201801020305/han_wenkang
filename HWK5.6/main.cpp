#include <iostream>

using namespace std;

int main()
{
    int sum=0,i=1,number=0;
    double average=0;
    cout<<"Enter integer or 9999 to quit:\n";

    cin>>number;

    for(;number!=9999;++i)
        {
            sum+=number;
            cin>>number;
            average=sum/i;
        }

    cout<<"Average of the integers is: "<<average<<endl;
}
