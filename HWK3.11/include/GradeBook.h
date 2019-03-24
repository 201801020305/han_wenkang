
#include <iostream>
#include <string>


class GradeBook
{
public:

    explicit GradeBook(std::string CSname,std::string TCname);
    void setCourseName(std::string coursename);
    std::string getCourseName() const;
    void setTeacherName(std::string teachername);
    std::string getTeacherName() const;
    void displayMessage() const;




private:
    std::string courseName,teacherName;
};

