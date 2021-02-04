#include <iostream>
using namespace std;

int cubeByValue(int);

int	main(int argc, char **argv)
{
    int number = 5;

    cout << "The original value of number is " << number;

    number = cubeByValue(number);

    cout << "\nThe new value number is " << number << endl;

    system("pause");
    return 0;
}

int cubeByValue(int n)
{
    return n * n * n;
}