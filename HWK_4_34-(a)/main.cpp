#include <iostream>

using namespace std;

int main()
{
    unsigned int number=0,result=1;
    unsigned int i=1;
    cout<<"Enter a nonnegative integer: ";
    cin>>number;

    while(i<=number)
    {
        result*=i;
        i++;
    }
    cout<<number<<"!="<<result<<endl;


}
