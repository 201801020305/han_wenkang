#include "GradeBook.h"
#include <iostream>
using namespace std;

GradeBook::GradeBook(std::string CSname,std::string TCname)
:courseName(CSname),teacherName(TCname)

{
    //ctor
}
void GradeBook::setCourseName(std::string coursename)
    {
        courseName=coursename;
    }

  std::string GradeBook::getCourseName() const
    {
        return courseName;
    }

  void GradeBook::setTeacherName(std::string teachername)
    {
        teacherName=teachername;
    }

       std::string GradeBook::getTeacherName() const
    {
        return teacherName;
    }

       void GradeBook::displayMessage() const
    {
        std::cout<<"Welcome to the grade book for:\n"<<getCourseName()<<"\nThis course is presented by:\n"<<getTeacherName();
    }
