// 1010 The Pointer Value Swap
// You’re given 2 integers — a and b. Write a function named swapPointers(int* a, int* b) that takes two integer pointers as arguments.

// Important:

// You must perform the swap inside the swapPointers function, not in the main function.

// You must use pointers to perform the swap.

// In your main function:

// Read two integers a and b.

// Print the values before the swap.

// Call swapPointers, passing the addresses of a and b.

// Print the values after the swap.




#include <iostream>
using namespace std;

// Function to swap values using pointers
void swapPointers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    // Print initial values
    cout << a << " " << b << endl;
    
    // Swap using pointers
    swapPointers(&a, &b);
    
    // Print swapped values
    cout << a << " " << b << endl;
    
    return 0;
}