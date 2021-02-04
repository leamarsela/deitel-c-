#include <iostream>
using namespace std;

int	main(int argc, char **argv)
{
    int a = 7;
    int *aPtr = &a;

    cout << "The Address of a is " << &a
        << "\nThe value of aPtr is " << aPtr;
    cout << "\n\nThe value of a is " << a
        << "\nThe value of *aPtr is " << *aPtr << endl;


    system("pause");
    return 0;
}
