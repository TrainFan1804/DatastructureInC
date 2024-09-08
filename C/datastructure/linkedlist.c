/*
 * I implemented the linked list with two arrays. The first array is the array
 * that store the data itself. I will refer this array as data array.
 * The second array is a array of pointers. Each pointer in this array will
 * point to one value of the data array. I will refer this array as pointer
 * array.
 */
#include <stdio.h>
#include "core.h"

extern int SIZE;

// create a "link" between the data array and the pointer array
void createPointerLinkToData(int* dataArr, int** pointerArr)
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		pointerArr[i] = &(*(dataArr + i));    // the same as: &dataArr[i];
	}
}

// now this is a real remove method
void removeIndex(int** head, int index)
{
    int i;
    for (i = index; i < SIZE - 1; i++)
    {
        *(*head + i) = *(*head + i + 1);    // the same as: *head[i] = *head[i + 1];
    }

    *(*head + SIZE - 1) = -1;    // the same as: *head[SIZE - 1] = -1;
}

// place a new value at the index
void replaceAt(int** head, int index, int newValue)
{
    *head[index] = newValue;
}

int main()
{
	int* pointer[SIZE];
	int data[SIZE]; 

	setArrayValues(data);
	createPointerLinkToData(data, pointer);

    printf("Print original array\n");
    printPointerArray(pointer);

	data[SIZE / 2] = 99; 
    printf("\nPrint after replace mid element\n");
	printPointerArray(pointer);

    removeIndex(pointer, 3);
    replaceAt(pointer, 7, 69);
    printf("\nPrint after remove and replace a element\n");
    printPointerArray(pointer);
	return 0;
}
