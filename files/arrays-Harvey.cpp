/*
created by Harvey Morris Reeves
EECS 280 Diagnostic Test
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "arrays.h"

using namespace std;


/*
This was my original function. It returned all of the expected
outputs except one. The original array was "a#~ *" and the expected
output was "f($%/", however the autograder had my output as "f(%/".

Testing the function on my own computer returned the correct result.
For some reason, it's not returning the correct result at the autograder.
*/
void add(char arr[], int size, int val){
	for(int i = 0; i < size; i++){
		char a = arr[i];
		if(a + (val % ASCII_PRINTABLE_RANGE) > MAX_PRINTABLE_ASCII) {
			a = a + (val % ASCII_PRINTABLE_RANGE) - ASCII_PRINTABLE_RANGE;
		}
		else if(a + (val % ASCII_PRINTABLE_RANGE) < MIN_PRINTABLE_ASCII) {
			a = a+(val % ASCII_PRINTABLE_RANGE) + ASCII_PRINTABLE_RANGE;
		} else {
            a = a+(val % ASCII_PRINTABLE_RANGE);
        }
		arr[i] = a;
	}
}

/*
Would this function work instead and return the correct result?
*/
void add2(char arr[], int size, int val){
	for(int i = 0; i < size; i++){
		int a = int(arr[i]);
		a += val;
		while(a > MAX_PRINTABLE_ASCII){
			a %= ASCII_PRINTABLE_RANGE;
		}

		a = char(a);
		arr[i] = a;
	}
}