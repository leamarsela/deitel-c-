#include <iostream>
using namespace std;

int	main()
{
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int array[20];
    int *ptr = array;

    cout << "size of c = " << sizeof c << "\tsizeof(char) = " << sizeof(c)
        << "\nsizeof s = " << sizeof s << "\tsizeof(short) = " << sizeof(s)
        << "\nsizeof i = " << sizeof i << "\tsizeof(int) = " << sizeof(int)
        << "\nsizeof l = " << sizeof l << "\tsizeof(long) = " << sizeof(long)
        << "\nsizeof ll = " << sizeof ll << "\tsizeof(long long) = " << sizeof(long long)
        << "\nsizeof f = " << sizeof f << "\tsizeof(float) = " << sizeof(float)
        << "\nsizeof d = " << sizeof d << "\tsizeof(double) = " << sizeof(double)
        << "\nsizeof ld = " << sizeof ld << "\tsizeof(long double) = " << sizeof(long double)
        << "\nsizeof array = " << sizeof array
        << "\nsizeof ptr = " << sizeof ptr << endl;   

    system("pause");
    return 0;
}
