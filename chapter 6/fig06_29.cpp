#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long);

int	main(int argc, char **argv)
{
    for (unsigned int counter = 0; counter <= 10; ++counter)
    {
        cout << "fibonacci(" << counter << " ) "
            << fibonacci(counter) << endl;
    }
    
    cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
    cout << "fibonacci(30) = " << fibonacci(30) << endl;
    cout << "fibonacci(35 = " << fibonacci(35) << endl;  

    system("pause");
    return 0;
}

unsigned long fibonacci(unsigned long number)
{
    if((0 == number) || (1 == number))
    {
        return number;
    }
    else
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }    
}