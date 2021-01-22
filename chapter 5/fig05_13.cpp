#include <iostream>
using namespace std;

int	main(int argc, char **argv)
{
    unsigned int count;

    for (count = 1; count <= 10; ++count)
    {
        if (count == 5)
        {
            break;
        }
        cout << count << " ";
    }
    
    cout << "\nBroke out of loop at count = " << count << endl;

    system("pause");
    return 0;
}

