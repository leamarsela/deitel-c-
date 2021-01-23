#include <iostream>
using namespace std;

int number = 7;


int	main(int argc, char **argv)
{
    double number = 10.5;

    cout << "Local double value of number = " << number
        << "\nGlobal int value of number = " << ::number << endl;


    system("pause");
    return 0;
}
