
int	main(int argc, char **argv)
{
    int x, y;

    int * const ptr = &x;

    *ptr = 7;
    ptr = &y;

    // system("pause");
    return 0;
}
