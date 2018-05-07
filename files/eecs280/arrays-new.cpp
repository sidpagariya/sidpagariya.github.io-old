// NAME     :   Siddhant Nandkishor Pagariya
// UNIQNAME :   sidp
// EMAIL    :   sid@sidpagariya.ml
// SITE     :   https://sidpagariya.ml
// PROG     :   EECS 280 Preparedness Diagnostic Tool - Fun with Arrays

#include "arrays.h"

/*----------------------------------------STANDARD CODE IMPORT----------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <string>


#define LL long long
#define MIN_INT -2147483648
#define MAX_INT 2147483647

inline LL Power(int b, int p) { LL ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }

#define Set(a, s) memset(a, s, sizeof (a))
#define F(i, a, b) for (int i=a; i<b; i++)
#define rF(i, b, a) for (int i=b; i>a; i--)
#define FN(i, a, b) for (i=a; i<b; i++)
#define rFN(i, b, a) for (i=b; i>a; i--)
#define Fcust(i, a, b, in) for (int i=a; i<b; i+=in)
#define Fs(i, sz) for(size_t i = 0; i < sz.size (); i++)
#define Fe(i, x) for(typeof (x.begin()) i = x.begin(); i != x.end (); i++)
#define max(a, b)  (a > b ? a : b)
#define min(a, b)  (a < b ? a : b)

using namespace std;

#define DEBUG false
#if (DEBUG==true)
ofstream dout("debug.out");
#define println(s) dout<<s<<'\n'
#define print(s) dout<<s
#else
#define println(s) cout<<s<<'\n'
#define print(s) cout<<s
#endif

double intpow(double base, int exponent)
{
    int i;
    double out = base;
    FN(i, 1, exponent)
    {
        out *= base;
    }
    return out;
}

/*----------------------------------------END OF STANDARD CODE----------------------------------------*/

void printRight(int n){
    F(i, 1, n+1){
        F(j, 1, i+1){
            print("*");
        }
        println("");
    }
}
void printRight_upsideDown_rightJustified(int n){
    F(i, 0, n){
        F(j, 0, i){
            print(" ");
        }
        F(j, 0, n-i){
            print("*");
        }
        println("");
    }
}
void printArray(const char arr[], int size){
    F(i, 0, size){
        print(arr[i]);
    }
    println("");
}
void printArray(const char arr[][SIZE], int rows, int cols){
    F(i, 0, rows){
        F(j, 0, cols){
            print(arr[i][j]);
        }
        println("");
    }
}
void add(char arr[], int size, int val){
    F(i, 0, size){
        arr[i] = (arr[i] + val < MIN_PRINTABLE_ASCII) ? (arr[i] + val + ASCII_PRINTABLE_RANGE) : ((arr[i] + val > MAX_PRINTABLE_ASCII) ? (arr[i] + val - ASCII_PRINTABLE_RANGE) : (arr[i] + val));
        //print(arr[i]);
        //arr[i] = arr[i] + val;
    }
    //println("");
}
void add(char arr[][SIZE], int rows, int cols, int val){
    F(i, 0, rows){
        add(arr[i], cols, val);
    }
}
void rotateLeft(char arr[], int size){
    char c = arr[0];
    F(i, 0, size-1){
        arr[i] = arr[i+1];
    }
    arr[size-1] = c;
}
void rotateLeft(char arr[][SIZE], int rows, int cols){
    F(i, 0, rows){
        rotateLeft(arr[i], cols);
    }
}
void rotateRight(char arr[], int size){
    char c = arr[size-1];
    rF(i, size-1, 0){
        arr[i] = arr[i-1];
    }
    arr[0] = c;
}
void rotateRight(char arr[][SIZE], int rows, int cols){
    F(i, 0, rows){
        rotateRight(arr[i], cols);
    }
}
void reverse(char arr[], int size){
    F(i, 0, size/2){
        char c = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = c;
    }
}
void swapRange(char arr1[], int size1, int index1, char arr2[], int size2, int index2, int len){
    F(i, 0, len){
        char c = arr1[index1+i];
        arr1[index1+i] = arr2[index2+i];
        arr2[index2+i] = c;
    }
}
void swapWithinOneRow(char arr[], int size, int len){
    Fcust(i, 0, size, 2 * len){
        if (i+2*len <= size){
            swapRange(arr, size, i, arr, size, i+len, len);
        }
        /*F(j, i, i+len && i+2*len <= size){
            //println("index " << j << " being replaced by " << j+len);
            char c = arr[j];
            arr[j] = arr[j+len];
            arr[j+len] = c;
            //printArray(arr, 12);
        }*/
    }
}
void swapRows(char arr[][SIZE], int rows, int cols){
    Fcust(i, 0, rows-1, 2){
        swapRange(arr[i], cols, 0, arr[i+1], cols, 0, cols);
    }
}

int main()
{
    /*println("printRight(3): ");
    printRight(3);
    println("\nprintRight_upsideDown_rightJustified(3): ");
    printRight_upsideDown_rightJustified(3);

    const char arr[2][SIZE] = { {'A','3','@'}, {'#','\\','9'} };
    println("\nprintArray(arr[0], 3): ");
    printArray(arr[0], 3);
    println("\nprintArray(arr, 2, 3): ");
    printArray(arr, 2, 3);

    char alph[2][SIZE] = {{'~', 'f', 'D', '3', '"', '!', ' '}, {' ', '!', '"', '3', 'D', 'f', '~'}};
    println("\nadd(alph[0], 7, 3): ");
    add(alph[0], 7, 3);
    println("\nadd(alph, 2, 7, -3): ");
    add(alph, 2, 7, -3);

    println("\nrotateLeft(alph[0], 7): ");
    rotateLeft(alph[0], 7);
    printArray(alph[0], 7);
    println("\nrotateLeft(alph, 2, 7): ");
    rotateLeft(alph, 2, 7);
    printArray(alph, 2, 7);

    println("\nrotateRight(alph[0], 7): ");
    rotateRight(alph[0], 7);
    printArray(alph[0], 7);
    println("\nrotateRight(alph, 2, 7): ");
    rotateRight(alph, 2, 7);
    printArray(alph, 2, 7);

    char nums[2][SIZE]={{'1', '2', '3', '4', '5', '6'}, {'7', '8', '9', '0', '1', '2'}};
    println("\nswapRange(nums[0], 6, 0, nums[1], 6, 3, 3): ");
    swapRange(nums[0], 6, 0, nums[1], 6, 3, 3);
    printArray(nums, 2, 6);

    char batmanrobin[12] = {'b','a','t','m','a','n','$','r','o','b','i','n'}, br[12];
    memcpy(br, batmanrobin, sizeof(br));
    println("\nswapWithinOneRow(batmanrobin, 12, 6): ");
    swapWithinOneRow(batmanrobin, 12, 6);
    printArray(batmanrobin, 12);
    memcpy(batmanrobin, br, sizeof(batmanrobin));
    println("swapWithinOneRow(batmanrobin, 12, 3): ");
    swapWithinOneRow(batmanrobin, 12, 3);
    printArray(batmanrobin, 12);
    memcpy(batmanrobin, br, sizeof(batmanrobin));
    println("swapWithinOneRow(batmanrobin, 12, 5): ");
    swapWithinOneRow(batmanrobin, 12, 5);
    printArray(batmanrobin, 12);
    memcpy(batmanrobin, br, sizeof(batmanrobin));
    println("swapWithinOneRow(batmanrobin, 12, 8): ");
    swapWithinOneRow(batmanrobin, 12, 8);
    printArray(batmanrobin, 12);

    char abc[4][SIZE] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}};
    println("\nswapRows(abc, 3, 3): ");
    swapRows(abc, 4, 3);
    printArray(abc, 4, 3);*/
    char arr[] = {'a', '#', '~', ' ', '*'};
    add(arr, 5, 5);
    printArray(arr, 5);
}
