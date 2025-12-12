// 1011
#include <iostream>
using namespace std;

// Function to update value using pointer
void updateValue(int* ptr, int val) {
    *ptr = *ptr + val;  // Add val to the value pointed to by ptr
}

int main() {
    int n, m;
    cin >> n >> m;
    
    // Update n using pointer
    updateValue(&n, m);
    
    // Print the updated value
    cout << n << endl;
    
    return 0;
}