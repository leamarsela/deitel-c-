#include <iostream>
using namespace std;

int	main(int argc, char **argv)
{
    int c = 5;
    cout << c << endl;
    cout << c++ << endl; //postincrement
    cout << c << endl;

    cout << endl;

    c = 5;
    cout << c << endl;
    cout << ++c << endl; //preincrement
    cout << c << endl;

    system("pause");
    return 0;
}

