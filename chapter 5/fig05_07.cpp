#include <iostream>
using namespace std;

int	main(int argc, char **argv)
{
    unsigned int counter = 1;

    do
    {
        cout << counter << " ";
        ++counter;
    } while (counter <= 10);
    
    cout << endl;

    system("pause");
    return 0;
}
