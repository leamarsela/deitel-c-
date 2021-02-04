

void f(const int *);

int	main(int argc, char **argv)
{
    int y = 0;

    f(&y);


    system("pause");
    return 0;
}


void f(const int *xPtr)
{
    *xPtr = 100;
}