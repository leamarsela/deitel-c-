#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int	main(int argc, char **argv)
{
    array<int, 5> n = {32, 27, 64, 18, 95};

    cout << "Element" << setw(13) << "Value" << endl;

    for (size_t i = 0; i < n.size(); ++i)
    {
        cout << setw(7) << i << setw(13) << n[i] << endl;
    }

    system("pause");
    return 0;
}
