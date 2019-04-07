#include <iostream>

using namespace std;

int main()
{
    unsigned int product=1;
             int r=0;
    for(unsigned int i=1;i<=15;i++)
    {
        r=i%2;
        if(r!=0)
        {
            product=product*i;

        }

    }
    cout<<"Product is: "<<product<<endl;


}
