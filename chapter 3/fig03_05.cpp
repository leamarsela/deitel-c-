#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    public:
    void setCourseName(string name)
    {
        courseName = name;
    }

    string getCoursename() const
    {
        return courseName;
    }

    void displayMessage() const
    {
        cout << "Welcome to the grade book for\n" << getCoursename() << "!" << endl;
    }

    private:
    string courseName;
};

int	main(int argc, char **argv)
{
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Initial course name is: " << myGradeBook.getCoursename() << endl;

    cout << "\nPlease enter the course name: " << endl;
    getline(cin, nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);

    cout << endl;
    myGradeBook.displayMessage();

    system("pause");
    return 0;
}






