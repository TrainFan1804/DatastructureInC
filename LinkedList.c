/*
 * I implemented the linked list with two arrays. The first array is the array
 * that store the data itself. I will refer this array as data array.
 * The second array is a array of pointers. Each pointer in this array will
 * point to one value of the data array. I will refer this array as pointer
 * array.
 */
#include <stdio.h>

const int SIZE = 10;

// set the values of the data array to 0 to be sure they are not random
// numbers
void setValuesZero(int* arr)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		arr[i] = i;
	}
}

// create a "link" between the data array and the pointer array
void createPointerLinkToData(int* dataArr, int** pointerArr)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		pointerArr[i] = &dataArr[i];
	}
}

void printArray(int** arr)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (*arr[i] < 0)
        {
            continue;
        }
        printf("%d\n", *arr[i]);
    }
}

// this is not a "real" remove method because the value that is saved at the
// index is just setting -1
void removeIndex(int** head, int index)
{
    *head[index] = -1; 
}

// place a new value at the index
void replaceAt(int** head, int index, int newValue)
{
    *head[index] = newValue;
}

int main()
{
	int* pointer[SIZE+1];
	int data[SIZE]; 

	setValuesZero(data);
	createPointerLinkToData(data, pointer);

	data[SIZE / 2] = 99; 
	printArray(pointer);

    printf("\n");
    removeIndex(pointer, 3);
    replaceAt(pointer, 7, 69);
    printArray(pointer);
	return 1;
}
