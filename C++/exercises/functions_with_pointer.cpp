/*
 * You should not use pointer for function paramter because you need to enter 
 * the address via '&'. The function will also allocate memory to save the
 * pointer address (unlike the reference that is just a alias to the same value).
 */
int foo(const int *numOne, const int *numTwo)
{
    /*
     * without const you could change the value that the pointer is pointing
     * to
     */
    return *numOne * *numTwo;
}

int main()
{
    int varOne = 10;
    int varTwo = 20;

    foo(&varOne, &varTwo);
}
