// 1011 The Pointer Value Updater
// You’re given 2 integers — n and m. Write a function named updateValue(int* ptr, int val) that accepts two arguments:

// A pointer to an integer (int* ptr);

// An integer value (int val).

// The function should add val to the variable being pointed to by ptr.

// In your main function:

// Read an integer n from the user.

// Read an integer m (the value to add) from the user.

// Call updateValue passing the address of n and the value of m.

// Print the new value of n.




#include <iostream>
using namespace std;


void updateValue(int* ptr, int val) {
    *ptr = *ptr + val;  
}

int main() {
    int n, m;
    cin >> n >> m;
    
    
    updateValue(&n, m);
    
    
    cout << n << endl;
    
    return 0;
}