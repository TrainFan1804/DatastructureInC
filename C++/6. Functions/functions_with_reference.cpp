int add(const int &numOne, const int &numTwo);

const int &max(const int &first, const int &second)
{
    return (first > second) ? first : second;
}

int main()
{
    int sum = add(5, 10);

    int m = max(80, 50);

    return 0;
}

int add(const int &numOne, const int &numTwo)
{
    return numOne + numTwo;
}
