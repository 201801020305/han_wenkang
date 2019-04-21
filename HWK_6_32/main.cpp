#include <iostream>

using namespace std;

int qualityPoints(double grade)
{
    int qualitypoint=0;
    if(grade>=90&&grade<=100)
        qualitypoint=4;
    else if(grade>=80&&grade<=90)
        qualitypoint=3;
    else if(grade>=70&&grade<80)
        qualitypoint=2;
    else if(grade>=60&&grade<70)
        qualitypoint=1;

    return qualitypoint;

}


int main()
{
    double studentgrade=0;

    while(1)
    {
        cout<<"Enter the grade: ";
    cin>>studentgrade;
    if(studentgrade>100||studentgrade<0)
        cout<<"The grade is mistake!!\n\n";
    else
        cout<<"The quality point is "<<qualityPoints(studentgrade)<<".\n\n";
    }

}
