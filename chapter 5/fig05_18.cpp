#include <iostream>
using namespace std;

int	main(int argc, char **argv)
{
    cout << boolalpha << "Logical AND (&&)"
        << "\nfalse && false: " << (false && false)
        << "\nfalse && true: " << (false && true)
        << "\ntrue && false: " << (true && false)
        << "\ntrue && true: " << (true && true) << "\n\n";

    cout << "Logical OR (||)"
        << "\nfalse || false: " << (false || false)
        << "\nfalse || true: " << (false || true)
        << "\ntrue || false: " << (true || false)
        << "\ntrue || true:  " << (true || true) << "\n\n";

    cout << "Logical NOT (!)"
        << "\n!false: " << (!false)
        << "\n!true: " << (!true) << endl;

    system("pause");
    return 0;
}
