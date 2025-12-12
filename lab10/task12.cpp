//1012 Array Traversal by Pointer

// Arrays in C++ act very much like pointers. Write a program that finds the maximum value in an array, but you are not allowed to use square brackets [] to access elements inside your loop. You must use pointer dereferencing (e.g., *(arr + i) or incrementing a pointer ptr++).

// In your main function:

// 1. Read an integer n.

// 2. Read n integers into an array.

// 3. Iterate through the array using a pointer to find the maximum value.

// 4. Print the maximum value.



#include <iostream>

using namespace std;

void read_array(int * arr, int n){
    for(int i = 0; i < n; ++i){
        cin >> *(arr + i);
    }
}

void print_array(int * arr, int n){
    for(int i = 0; i < n; ++i){
        cout <<  *(arr + i) << " ";
    }
}

int max_in_array(int * arr, int n){
    int max_index = 0;
    for(int i = 1; i < n; ++i){
        if(*(arr + i) > *(arr + max_index)){
            max_index = i;
        }
    }
    return *(arr + max_index);
}


int main(){

    int n;
    cin >> n;

    int a[n];

    read_array(a, n);
    
    cout << max_in_array(a, n);

    return 0;
}


