#include <iostream>
#include "GradeBook.h"

using namespace std;
int main()
{
    string nameC,nameT;
    GradeBook myGradeBook("CS101 Introduction to C++ Programming","Mr.Shi");

    cout<<"Please enter the course name:\n";
    getline(cin,nameC);
    myGradeBook.setCourseName(nameC);
    cout<<"Please enter the teacher name:\n";
    getline(cin,nameT);
    myGradeBook.setTeacherName(nameT);

    cout<<endl;

    myGradeBook.displayMessage();

}
