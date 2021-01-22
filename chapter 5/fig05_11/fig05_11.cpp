#include "GradeBook.h"

int	main(int argc, char **argv)
{
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();

    system("pause");
    return 0;
}
