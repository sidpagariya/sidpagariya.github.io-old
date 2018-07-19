#include "arrays.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void printRight(int n)
{
    if(n>0)
    {
        int i,j;
        for(i=1;i<=3;i++)
        {
            for(j=0;j<i;j++)
            cout<<"*";
            cout<<"\n";
        }
    }

}



// Requires: n must be > 0
// Modifies: nothing
// Effects: prints a right triangle upside down
//   with a parameter of 3 gives
// Note: no spaces at the end of lines
//***
// **
//  *
void printRight_upsideDown_rightJustified(int n)
{
    if(n>0)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(j>=i)
                cout<<"*";
                else
                cout<<" ";
            }
            cout<<"\n";
        }
    }
}


void printArray(const char arr[], int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i];
    cout<<endl;
}


void printArray(const char arr[][SIZE], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        cout<<arr[i][j];
        cout<<endl;

    }
}


void add(char arr[], int size, int val)
{
    for(int i=0;i<size;i++)
    {
        if (arr[i]+(val%ASCII_PRINTABLE_RANGE) > MAX_PRINTABLE_ASCII){
            arr[i] = arr[i]+(val%ASCII_PRINTABLE_RANGE) - ASCII_PRINTABLE_RANGE;
        } else if (arr[i]+(val%ASCII_PRINTABLE_RANGE) < MIN_PRINTABLE_ASCII){
            arr[i] = arr[i]+(val%ASCII_PRINTABLE_RANGE) + ASCII_PRINTABLE_RANGE;
        } else {
            arr[i] = arr[i]+(val%ASCII_PRINTABLE_RANGE);
        }
    }

}


void add(char arr[][SIZE], int rows, int cols, int val)
{
    for(int i=0;i<rows;i++)
    add(arr[i], cols, val);
}

void rotateLeft(char arr[], int size)
{
    char ch=arr[0];
    for(int i=0;i<(size-1);i++)
    arr[i]=arr[i+1];
    arr[size-1]=ch;
}


void rotateLeft(char arr[][SIZE], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    rotateLeft(arr[i],cols);
}

void rotateRight(char arr[], int size)
{
    char ch=arr[size-1];
    for(int i=size-1;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=ch;
}


void rotateRight(char arr[][SIZE], int rows, int cols) //ERROR!!!!!
{
    for(int i=0;i<rows;i++)
    rotateRight(arr[i],cols);
}

void reverse(char arr[], int size)
{
    char a[size];
    int i,j=size;
    for(i=0;i<size;i++)
    a[i]=arr[--j];
    for(i=0;i<size;i++)
    arr[i]=a[i];
}

void swapRange(char arr1[], int size1, int index1, char arr2[], int size2, int index2, int len)
{
    int i,j,temp;
    for(i=index1,j=index2;(i<(index1+len))&&(j<(index2+len));i++,j++)
    {
        temp=arr1[i];
        arr1[i]=arr2[j];
        arr2[j]=temp;
    }

}

void swapWithinOneRow(char arr[], int size, int len)
{
    for (int i=0; i<size; i+=2*len)
    {
        if(i+2*len <= size)
        {
            swapRange(arr,size,i,arr,size,i+len,len);
        }
    }
}

void swapRows(char arr[][SIZE], int rows, int cols)
{

    for(int i=0;i<(rows-1);i+=2)
    swapRange(arr[i],cols,0,arr[i+1],cols,0,cols);
}