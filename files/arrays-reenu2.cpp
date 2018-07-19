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
        for(i=1;i<=n;i++)
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
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
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


int main()
{
    cout << "printRight(5): "<< '\n';
    printRight(5);
    cout << "\nprintRight_upsideDown_rightJustified(5): "<< '\n';
    printRight_upsideDown_rightJustified(5);

    const char arr[2][SIZE] = { {'A','3','@'}, {'#','\\','9'} };
    cout << "\nprintArray(arr[0], 3): " << '\n';
    printArray(arr[0], 3);
    cout << "\nprintArray(arr, 2, 3): " << '\n';
    printArray(arr, 2, 3);

    char alph[2][SIZE] = {{'~', 'f', 'D', '3', '"', '!', ' '}, {' ', '!', '"', '3', 'D', 'f', '~'}};
    cout << "\nadd(alph[0], 7, 3): " << '\n';
    add(alph[0], 7, 3);
    cout << "\nadd(alph, 2, 7, -3): " << '\n';
    add(alph, 2, 7, -3);

    cout << "\nrotateLeft(alph[0], 7): " << '\n';
    rotateLeft(alph[0], 7);
    printArray(alph[0], 7);
    cout << "\nrotateLeft(alph, 2, 7): " << '\n';
    rotateLeft(alph, 2, 7);
    printArray(alph, 2, 7);

    cout << "\nrotateRight(alph[0], 7): " << '\n';
    rotateRight(alph[0], 7);
    printArray(alph[0], 7);
    cout << "\nrotateRight(alph, 2, 7): " << '\n';
    rotateRight(alph, 2, 7);
    printArray(alph, 2, 7);

    char nums[2][SIZE]={{'1', '2', '3', '4', '5', '6'}, {'7', '8', '9', '0', '1', '2'}};
    cout << "\nswapRange(nums[0], 6, 0, nums[1], 6, 3, 3): " << '\n';
    swapRange(nums[0], 6, 0, nums[1], 6, 3, 3);
    printArray(nums, 2, 6);

    char batmanrobin[12] = {'b','a','t','m','a','n','$','r','o','b','i','n'}, br[12];
    memcpy(br, batmanrobin, sizeof(br));
    cout << "\nswapWithinOneRow(batmanrobin, 12, 6): " << '\n';
    swapWithinOneRow(batmanrobin, 12, 6);
    printArray(batmanrobin, 12);
    memcpy(batmanrobin, br, sizeof(batmanrobin));
    cout << "swapWithinOneRow(batmanrobin, 12, 3): " << '\n';
    swapWithinOneRow(batmanrobin, 12, 3);
    printArray(batmanrobin, 12);
    memcpy(batmanrobin, br, sizeof(batmanrobin));
    cout << "swapWithinOneRow(batmanrobin, 12, 5): " << '\n';
    swapWithinOneRow(batmanrobin, 12, 5);
    printArray(batmanrobin, 12);
    memcpy(batmanrobin, br, sizeof(batmanrobin));
    cout << "swapWithinOneRow(batmanrobin, 12, 8): " << '\n';
    swapWithinOneRow(batmanrobin, 12, 8);
    printArray(batmanrobin, 12);

    char abc[4][SIZE] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}};
    cout << "\nswapRows(abc, 3, 3): " << '\n';
    swapRows(abc, 4, 3);
    printArray(abc, 4, 3);

    char arr2[5]={'a', 'b', 'c', '0'};
    add(arr2, 5, -953);
    printArray(arr2, 5);
}