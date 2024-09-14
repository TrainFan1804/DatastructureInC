/*
 * Unlike C you should NOT use pointers for arguments but references instead
 */

int add(const int &numOne, const int &numTwo);

/*
 * When you want to return a reference the returned reference must be a constant
 * value. You can not return a variable which was initialise in the local scope of
 * the function.
 */
const int &max(const int &first, const int &second)
{
    return (first > second) ? first : second;
}

int main()
{
    int sum = add(5, 10);

    int m = max(80, 50);
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
