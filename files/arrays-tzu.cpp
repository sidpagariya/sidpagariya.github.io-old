#include <iostream>
#include "arrays.h"

using namespace std;

void printRight (int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}

}

void printRight_upsideDown_rightJustified (int n)
{
	for (int i = n; i >= 1; i--)
	{
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << "\n";
	}
}

void printArray (const char arr [], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr [i];
	cout << "\n";
}

void printArray (const char arr [] [SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
		printArray (arr [i], cols);
}

void add (char arr [], int size, int val)
{
	for (int i = 0; i < size; i++)
	{
		/*if (arr [i] < MIN_PRINTABLE_ASCII || arr [i] > MAX_PRINTABLE_ASCII)
			break;*/
		int tmp = (arr [i] + (val%ASCII_PRINTABLE_RANGE));
		if (tmp < MIN_PRINTABLE_ASCII)
			tmp += ASCII_PRINTABLE_RANGE;
		else if (tmp > MAX_PRINTABLE_ASCII)
			tmp -= ASCII_PRINTABLE_RANGE;
		arr [i] = tmp;
	}
}

void add (char arr [] [SIZE], int rows, int cols, int val)
{
	for (int i = 0; i < rows; i++)
		add (arr [i], cols, val);
}

void rotateLeft (char arr [], int size)
{
	char prev = arr [size - 1];
	for (int i = size - 2; i >= 0; i--)
	{
		char tmp = arr [i];
		arr [i] = prev;
		prev = tmp;
	}
	arr [size - 1] = prev;
}

void rotateLeft (char arr [] [SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
		rotateLeft (arr [i], cols);
}

void rotateRight (char arr [], int size)
{
	char prev = arr [0];
	for (int i = 1; i < size; i++)
	{
		char tmp = arr [i];
		arr [i] = prev;
		prev = tmp;
	}
	arr [0] = prev;
}

void rotateRight (char arr [] [SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
		rotateRight (arr [i], cols);
}

void reverse (char arr [], int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		char tmp = arr [i];
		arr [i] = arr [size - 1 - i];
		arr [size - 1 - i] = tmp;
	}
}

void swapRange (char arr1 [], int size1, int index1, char arr2 [], int size2, int index2, int len)
{
	while (len > 0)
	{
		char tmp = arr1 [index1];
		arr1 [index1] = arr2 [index2];
		arr2 [index2] = tmp;

		index1++;
		index2++;
		len--;
	}
}

void swapWithinOneRow (char arr [], int size, int len)
{
	for (int i = 0; i + len * 2 <= size; i += len * 2)
		swapRange (arr, size, i, arr, size, i + len, len);
}

void swapRows (char arr [] [SIZE], int rows, int cols)
{
	if (rows % 2 != 0)
		rows--;
	for (int i = 0; i < rows; i += 2)
		swapRange (arr [i], cols, 0, arr [i + 1], cols, 0, cols);
}

//int main ()
//{
//	return 0;
//}