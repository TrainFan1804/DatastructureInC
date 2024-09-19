int foo(const int *numOne, const int *numTwo)
{
    return *numOne * *numTwo;
}

int main()
{
    int varOne = 10;
    int varTwo = 20;

    foo(&varOne, &varTwo);

    return 0;
}
