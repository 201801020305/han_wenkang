#include <iostream>

using namespace std;


int transposition(int number)
{
    int length=1;
    while(number/length>=10)
        {
            length*=10;

        }
    int time=1,reversNumber=0;
    while(number>=10)
    {
        reversNumber+=(number/length)*time;
        number-=(number/length)*length;
        length/=10;
        time*=10;
    }
    reversNumber+=number*time;
    return reversNumber;
}

int main()
{
    int integer=0;

    cout<<"Enter a integer to get its revers number:\n";
    cin>>integer;

    cout<<transposition(integer);


}
