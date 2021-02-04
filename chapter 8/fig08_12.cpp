#include <iostream>

using namespace std;

int	main(int argc, char **argv)
{
    int x = 5, y;

    const int *const ptr = &x;

    cout << *ptr << endl;


    system("pause");
    return 0;
}

