#include <stdio.h>

struct firstStruct
{
    int integer;
    char character;
};

int main()
{
    printf("Struct are basically classes without methods and only public fields"
            " and without inheritance\n");
        
    struct firstStruct s1;
    s1.integer = 42;
    s1.character = 'C';
    printf("s1.integer = %d\n", s1.integer);
    printf("s1.character = %c\n", s1.character);

    struct firstStruct s2 = {69, 'B'};
    printf("s2.integer = %d\n", s2.integer);
    printf("s2.character = %c\n", s2.character);
}

