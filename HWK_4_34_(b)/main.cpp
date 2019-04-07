#include <iostream>

using namespace std;

int main()
{
    int i=1,accuracy=0,factorial=1;
    double e=1;
    cout<<"Enter the accuracy of e: ";
    cin>>accuracy;

    while(i<accuracy)
    {
        factorial*=i;
        e+=1/(double)factorial;
        i++;
    }

    cout<<"e="<<e<<endl;
}
