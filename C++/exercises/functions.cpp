/*
 * Unlike C you should NOT use pointers for arguments but references instead
 */
int add(const int &numOne, const int &numTwo);

int main()
{
    int sum = add(5, 10);
}

/*
 * This functions take two 'references' of the type int. A reference is an 'alias'
 * to a variable. The keywork const doesn't allow changes inside the function
 * because that would also change the original value.
 */
int add(const int &numOne, const int &numTwo)
{
    return numOne + numTwo;
}
