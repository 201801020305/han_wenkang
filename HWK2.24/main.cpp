//homework2.24----Han_Wenkang
#include <iostream>

using namespace std;

int main()
{
    int a=0,r=0;
    cout << "Enter a integer: " << endl;
    cin >> a;
    r=a%2;
    if(r==0)
        cout<<a<<" is a even number."<<endl;

    if(r!=0)
        cout<<a<<" is an odd number."<<endl;
    return 0;
}
