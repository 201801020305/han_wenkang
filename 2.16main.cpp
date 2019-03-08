#include <iostream>

using namespace std;

int main()
{
   int x = 0;
   int y = 0;
   int rusult1 = 0;
   int rusult2 = 0;
   int rusult3 = 0;
   int sum= 0;

   cout<<"Enter first integer:";
   cin>>x;
   cout<<"Enter second integer:";
   cin>>y;
   sum = x+y;
   cout<<"sum is"<<sum<<endl;


   rusult1 = x*y;
   cout<<"\nThe product is"<<rusult1<<endl;
   rusult2 = x/y;
   cout<<"\nThe quotient is"<<rusult2<<endl;
   rusult3= x-y;
   cout<<"\nThe difference is"<<rusult3<<endl;

}
