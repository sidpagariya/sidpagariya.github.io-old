#include "arrays.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

// Requires: n must be > 0
// Modifies: nothing
// Effects: prints a right triangle
//  with a parameter of 3 gives
// Note: no spaces at the end of lines
//*
//**
//***
void printRight(int n)
{
    if(n>0)
    {
        int i,j;
        for(i=1;i<=3;i++)
        {
            for(j=0;j<i;j++)
            cout<<n;
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
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=3;j>i;j--)
            cout<<n;
            cout<<"\n";
        }
    }

}



// Requires: The size of array arr is size && size > 0 && size <= SIZE
// Modifies: Nothing
// Effects:  Prints the elements of the array to the monitor
//           Prints an endl at the end
//
//           e.g., If array a contains {'A','%','8'} then the following code:
//
//                 printArray(a,3);
//                 cout << "Hello";
//     will print:
//                 A%8
//                 Hello
// Note that there must be no space after the last element('8') in the above example
void printArray(const char arr[], int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i];
    cout<<endl;
}


// Requires: The size of array arr is rows x cols && rows > 0 && rows <= SIZE
//                                                && cols > 0 && cols <= SIZE
//
//           i.e., Even though array arr is allocated with SIZE rows, columns,
//                 it is a partially filled array
// Modifies: Nothing
// Effects:  Prints the elements of the array
//             one row per line
//           Prints an endl at the end
//
//           e.g., If array arr contains {{'A','3','@'}{'#','\','9'}}
//                  then the following code:
//
//                 printArray(arr,2,3);
//                 cout << "Hello";
//          will print:
//                 A3@
//                 #\9
//                 Hello
// Note: that there must be no spaces after '3' and '\' above
// Calls: printArray(const char arr[], int size);
void printArray(const char arr[][SIZE], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        cout<<arr[i][j];
        cout<<endl;

    }
}



// Requires: The size of array arr is size && size > 0 && size <= SIZE
// Modifies: The array arr
// Effects:  Adds val to each character in the array
//           If the array is: how now brown cow
//           and val = 5,
//           then result is:  mt|%st|%gwt|s%ht|
// Note:     Make sure the character remains in the ' ' MIN_PRINTABLE_ASCII
//           to '~' MAX_PRINTABLE_ASCII range (inclusive)
//           all printable characters are between this range
//           If character < MIN_PRINTABLE_ASCII, then add ASCII_PRINTABLE_RANGE
//           If character > MAX_PRINTABLE_ASCII, then subtract ASCII_PRINTABLE_RANGE
//            to put back within range,  repeat as needed
//           all printable characters are between this range
//           ' ' is the 1st printable character (ASCII 32)
//           '~' is the last printable character (ASCII 126)
// Note:     Do not do the addition on char's. It could cause an overflow
void add(char arr[], int size, int val)
{
    int i;
    for(i=0;i<size;i++)
    {
        if((arr[i]>MIN_PRINTABLE_ASCII)&&(arr[i]<MAX_PRINTABLE_ASCII))
        arr[i]=arr[i]+val;
        else if(arr[i] < MIN_PRINTABLE_ASCII)
        arr[i]+=ASCII_PRINTABLE_RANGE;
        else arr[i]-=ASCII_PRINTABLE_RANGE;

    }
}



// Requires: The size of array arr is rows x cols && rows > 0 && rows <= SIZE
//                                                && cols > 0 && cols <= SIZE
// Modifies: The array arr
// Effects:  Adds val to each character in the array
//           If the array is the following:
//                     (note there are some spaces at the end of lines)
//           how
//           now
//           brown
//           cow
// with val = 5, the result would be
//           mt|%%
//           st|%%
//           gwt|s
//           ht|%%
// Note: Make sure the new character remains in the MIN_PRINTABLE_ASCII to
//           MAX_PRINTABLE_ASCII range (inclusive)
//           all printable characters are between this range
// Calls: void add(char arr[], int size, int val);
// Note:     Do not do the addition on char's. It could cause an overflow
void add(char arr[][SIZE], int rows, int cols, int val)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if((arr[i][j]>MIN_PRINTABLE_ASCII)&&(arr[i][j]<MAX_PRINTABLE_ASCII))
            arr[i][j]+=val;
            else if(arr[i][j]<MIN_PRINTABLE_ASCII)
            arr[i][j]+=ASCII_PRINTABLE_RANGE;
            else arr[i][j]-=ASCII_PRINTABLE_RANGE;
        }


    }
}



// Requires: The size of array arr is size && size > 0 && size <= SIZE
// Modifies: The array arr
// Effects:  Rotates the array by one element to the left
//           e.g., Array:  abcde when rotated left becomes: bcdea
void rotateLeft(char arr[], int size)
{
    int i;
    char a[size];
    for(i=0;i<size;i++)
    {
        a[i]=arr[i+1];
        if(i==size-1)
        a[i]=arr[0];
    }
    for(int j=0;j<size;j++)
    arr[j]=a[j];

}



// Requires: The size of array arr is rows x cols && rows > 0 && rows <= SIZE
//                                                && cols > 0 && cols <= SIZE
// Modifies: The array arr
// Effects:  Rotates each row of the array by one element to the left
//           e.g., Array
//            abc
//            def
//            ghi
//          Result is:
//            bca
//            efd
//            hig
// Calls: void rotateLeft(char arr[], int size);
void rotateLeft(char arr[][SIZE], int rows, int cols)
{
    char a[6][SIZE];
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            a[i][j]=arr[i][j+1];
            if(j==(cols-1))
            a[i][j]=arr[i][0];
        }

    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        arr[i][j]=a[i][j];
    }


}


// Requires: The size of array arr is size && size > 0 && size <= SIZE
// Modifies: The array arr
// Effects:  Rotates the array by one element to the right
//           e.g., Array: abcdef   when rotated right becomes: fabcde
void rotateRight(char arr[], int size)
{
    int i;
    char a[size];
    a[0]=arr[size-1];
    for(i=1;i<size;i++)
    a[i]=arr[i-1];
    for(i=0;i<size;i++)
    {
        arr[i]=a[i];
        cout<<arr[i];
    }


}



// Requires: The size of array arr is rows x cols && rows > 0 && rows <= SIZE
//                                                && cols > 0 && cols <= SIZE
// Modifies: The array arr
// Effects:  Rotates each row of the array by one element to the right
//           e.g., Array
//            abc
//            def
//            ghi
//          Result is:
//            cab
//            fde
//            igh
// Calls: void rotateRight(char arr[], int size);
void rotateRight(char arr[][SIZE], int rows, int cols)
{
    char a[5][SIZE];
    int i,j;
    for(i=0;i<rows;i++)
    {
        a[i][0]=arr[i][cols-1];
        for(j=1;j<cols;j++)
        a[i][j]=arr[i][j-1];

    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            arr[i][j]=a[i][j];
            cout<<arr[i][j];
        }

    }


}



// Requires: The size of array arr is size && size > 0 && size <= SIZE
// Modifies: The array ar
// Effects:  Reverses the ordering of elements within the array
//           e.g., Array: abcdef when reversed becomes: fedcba
void reverse(char arr[], int size)
{
    char a[size];
    int i,j=size;
    for(i=0;i<size;i++)
    a[i]=arr[--j];
    for(i=0;i<size;i++)
    arr[i]=a[i];
}



// Requires: arr1 to have size1 >= index1 + len  && size1 > 0 && size1 <= SIZE
//           arr2 to have size2 >= index2 + len && size2 > 0 && size2 <= SIZE
//           index1 must be within range of arr1
//           len >= 0
//           index1 + len - 1 must be within range of arr1
//           index2 must be within range of arr2
//           index2 + len - 1 must be within range of arr2
// Modifies: The array arr1 and array arr2
// Effects:  Swap elements of arr1 and elements of arr2 according to the following
//           elements of arr1 from arr1[index1] to arr1[index1+len-1] are swapped with
//           elements of arr2 from arr2[index2] to arr2[index2+len-1] inclusive
// Example:  if arr1 is: 123456 index1 = 0, len = 3
//              arr2 is: 789012 index2 = 3
//           the result is:
//           arr1 is: 012456       arr2 is: 789123
void swapRange(char arr1[], int size1, int index1, char arr2[], int size2, int index2, int len)
{
    int i,j,temp;
    if(((size1>=(index1+len))&&(size1>0)&&(size1<=SIZE))&&((size2>=(index2+len))&&(size2>0)&&(size2<=SIZE)))
    {
        for(i=index1,j=index2;(i<(index1+len))&&(j<(index2+len));i++,j++)
        {
            temp=arr1[i];
            arr1[i]=arr2[j];
            arr2[j]=temp;
        }
        for(i=0;i<size1;i++)
        cout<<arr1[i];
        cout<<"\n";
        for(i=0;i<size2;i++)
        cout<<arr2[i];
    }
}


// Requires: The size of array arr is size &&  size > 0 && size <= SIZE && len > 0
// Modifies: The array arr
// Effects:  Exchanges len number of characters with the next len
//           number of characters continueing across the row.
//           If there isn't enough characters to do the exchange,
//           then exchange nothing.
// Example:  if the array is: batman$robin and len is 6, then batman is
//           exchanged with $robin resulting in: $robinbatman
//           if len is 3, then bat will exchange with man and
//              $ro will exchange with bin resulting in: manbatbin$ro
//           if len is 5, then batma will exchange with n$rob
//              resulting in: n$robbatmain
//           if len is 8, the exchange is not possible so do nothing
// Note: be careful you don't go outside bounds of the array on this one
// Calls: swapRange
void swapWithinOneRow(char arr[], int size, int len)
{

    if((size>0)&&(size<=SIZE)&&(len>0))
    {
        if((size-len)>=len)
        {
            swapRange(arr,size,0,arr,size,len,len);
        }
    }
}


// Requires: The size of array arr is rows x cols && rows > 0 && rows <= SIZE
//                                                && cols > 0 && cols <= SIZE
// Modifies: The array arr
// Effects:  Will swap the row with index 0 with row index 1,
//                         row with index 2 with row index 3, etc
//           If n is odd, the last row will not be swapped
// Example:  if the array is
//         a b c
//         d e f
//         g h i
//       the result will be
//         d e f
//         a b c
//         g h i
// Calls: swapRange
void swapRows(char arr[][SIZE], int rows, int cols) //Sid's logic
{

    for(int i=0;i<(rows-1);i+=2)
    swapRange(arr[i],cols,0,arr[i+1],cols,0,cols);
}
/*
int main()
{
    cout << "printRight(3): "<< '\n';
    printRight(3);
    cout << "\nprintRight_upsideDown_rightJustified(3): "<< '\n';
    printRight_upsideDown_rightJustified(3);

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
}
*/