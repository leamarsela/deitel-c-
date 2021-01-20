#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
    public:
    explicit GradeBook (string name) 
        : courseName(name)
    {
        // empty
    }

    void setCourseName(string name)
    {
        courseName = name;
    }

    string getCourseName() const
    {
        return courseName;
    }

    void displayMessage() const
    {
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    }

    private:
    string courseName;
};

int	main(int argc, char **argv)
{
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;

    system("pause");
    return 0;
}
