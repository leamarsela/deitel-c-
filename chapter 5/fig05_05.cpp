#include <iostream>
using namespace std;

int	main(int argc, char **argv)
{
    unsigned int total = 0;

    for (unsigned int number = 2; number <= 20; number+=2)
    {
        total += number;
    }
    
    cout << "Sum is " << total << endl;

    system("pause");
    return 0;
}

