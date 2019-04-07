#include <iostream>

using namespace std;

int main()
{
    double a=0,b=0,c=0;

    cout<<"Please enter three side of triangle:\n";

    cin>>a>>b>>c;
    if(a>0&&b>0&&c>0)
    {
        if(a>b)
        {
            if(c<(a+b)&&c>(a-b))
                cout<<"Can form a triangle";
            else
                cout<<"Can't form a triangle";
        }

        if(a<b)
        {


            if(c<(a+b)&&c>(b-a))
                cout<<"Can form a triangle";
            else
                cout<<"Can't form a triangle";
        }

    }
    else
        cout<<"Can't form a triangle,the edges must be Positive number!!!";


}
