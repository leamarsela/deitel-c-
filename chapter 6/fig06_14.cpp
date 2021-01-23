#include <iostream>
using namespace std;

int square(int);

int	main(int argc, char **argv)
{
    int a = 10;

    cout << a << " squared: " << square(a) << endl;

    system("pause");
    return 0;
}


int square(int x)
{
    return x * x;
}
