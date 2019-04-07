#include <iostream>

using namespace std;

int main()
{
    cout<<"Number"<<"        "<<"Factorial\n";

    int number=1,factorial=1;
    while(number<=5)
    {
        factorial=1;

        for(unsigned int i=1;i<=number;i++)
            factorial*=i;

        cout<<"\n！！！！！！！！！！！！！！                       \n"<<"  "<<number<<"              "<<factorial<<"\n";

        number++;
    }
}
