int main()
{
    int *ptr{ new int{ 42 } };
    delete ptr;
    ptr = nullptr;

    int *arr{ new int[10] };
    delete[] arr;
    arr = nullptr;

    return 0;
}
