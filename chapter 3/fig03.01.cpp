#include <iostream>

using namespace std;

class GradeBook
{
    public:
    void displayMessage()
    {
        cout << "Welcome to the Grade Book!" << endl;
    }
};

int	main(int argc, char **argv)
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();


    system("pause");
    return 0;
}

