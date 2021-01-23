#include <iostream>
using namespace std;

void function1();
void function2(void);

int	main(int argc, char **argv)
{
    function1();
    function2();

    system("pause");
    return 0;
}


void function1()
{
    cout << "function1 takes no arguments" << endl;
}

void function2(void)
{
    cout << "function2 also takes no arguments" << endl;
}
