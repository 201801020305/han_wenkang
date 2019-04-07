#include <iostream>

using namespace std;

int main()
{
    unsigned int counter=1;
    double number=0,largest=0;

    cout<<"Enter 10 numbers:\n";

    while(counter<=10)
    {
        cin>>number;
        if(number>=largest)
            largest=number;
        counter++;

    }
    cout<<"The largest number is: "<<largest<<endl;

}
