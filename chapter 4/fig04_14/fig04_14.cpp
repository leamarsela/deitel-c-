#include "GradeBook.h"

int	main(int argc, char **argv)
{
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();

    system("pause");
    return 0;
}
