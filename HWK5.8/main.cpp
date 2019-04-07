#include <iostream>

using namespace std;

int main()
{
    unsigned int n=0;
    int number=0,smallest=0;

    cout<<"Enter the number of integer and the integers:\n";
    cin>>n;
    cin>>smallest;

    for(unsigned int i=2;i<=n;i++)
    {   cin>>number;
        if(number<smallest)
            smallest=number;
    }
    cout<<"The smallest integer is "<<smallest<<".";

}
