#include <iostream>
using namespace std;

size_t getSize(double *);

int	main(int argc, char **argv)
{
    double numbers[20];

    cout << "The number of bytes in the array is " << sizeof(numbers);

    cout << "\nThe number of bytes returned by getSize is " 
        << getSize(numbers) << endl;


    system("pause");
    return 0;
}



size_t getSize(double *ptr)
{
    return sizeof(ptr);
}