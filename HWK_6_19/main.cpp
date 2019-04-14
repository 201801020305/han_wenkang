#include <iostream>
#include <cmath>

using namespace std;


double hypotenuse(double a,double b)
{
    double c=0;
    c=sqrt(pow(a,2)+pow(b,2));
    return c;

}

int main()
{
    int x,y;
    for(unsigned int i =1 ; i<=3;i++)
    {
        cout<<"Enter 2 sides of right triangle:\n";
        cin>>x>>y;
        cout<<"Hypotenuse is: "<<hypotenuse(x,y)<<"\n";
    }

    return 0;
}
