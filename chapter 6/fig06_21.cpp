#include <iostream>
using namespace std;

unsigned int boxVolume(unsigned int length = 1, unsigned int width = 1, unsigned int height = 1);

int	main(int argc, char **argv)
{
    cout << "The deafult box volume is: " << boxVolume();

    cout << "\n\nThe volume of a box with length 10,\n"
        << "width 1 and height 1 is: " << boxVolume(10);

    cout << "\n\nThe volume of a box with length 10,\n"
        << "width 5 and height 1 is: " << boxVolume(10, 5);

    cout << "\n\nThe volume of a box with length 10,\n"
        << "width 5 and height 2 is: " << boxVolume(10, 5, 2)
        << endl;

    system("pause");
    return 0;
}


unsigned int boxVolume(unsigned int length, unsigned int width, unsigned int height)
{
    return length * width * height;
}