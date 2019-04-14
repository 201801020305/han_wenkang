#include <iostream>
#include <iomanip>
using namespace std;

int celsius(int fahrenheit)
{
    return (fahrenheit-32)/1.8;
}

int fahrenheit(int celsius)
{
    return celsius*1.8+32;
}

int main()
{
    cout<<"celsius(¡æ)"<<setw(17)<<"fahrenheit(¨H)"<<setw(21)<<"fahrenheit(¨H)"<<setw(17)<<"celsius(¡æ)\n";
    for(unsigned int i=0;i<=100;i++)
    {
        cout<<setw(3)<<i<<setw(17)<<fahrenheit(i)<<setw(10)<<"Ø­"<<setw(11)<<i+32<<setw(17)<<celsius(i+32)<<"\n";
    }
    for(unsigned int i=133;i<=212;i++)
        cout<<setw(41)<<i<<setw(17)<<celsius(i+32)<<"\n";
}
