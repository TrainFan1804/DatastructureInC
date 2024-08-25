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

	setArrayValues(data);
	createPointerLinkToData(data, pointer);

	data[SIZE / 2] = 99; 
	printPointerArray(pointer);

    printf("\n");
    removeIndex(pointer, 3);
    replaceAt(pointer, 7, 69);
    printPointerArray(pointer);
	return 1;
}
