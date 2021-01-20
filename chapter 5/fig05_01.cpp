#include <iostream>
using namespace std;

int	main(int argc, char **argv)
{
    unsigned int counter = 1;

    while (counter <= 10)
    {
        cout << counter << " ";
        ++counter;
    }
    
    cout << endl;

    system("pause");
    return 0;
}
