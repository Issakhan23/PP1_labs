//712 How many elements are the same?
#include <iostream>
#include <algorithm>
using namespace std;

void process(int a[], int a2[], int n) {
    int freq_a[101] = {0}; 
    int freq_b[101] = {0}; 
    for (int i = 0; i < n; i++) {
        freq_a[a[i]]++;
        freq_b[a2[i]]++;
    }
    int pairs = 0;
    for (int i = 1; i <= 100; i++) {
        pairs += min(freq_a[i], freq_b[i]);
    }
    cout << pairs;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }
    
    process(arr, arr2, n);
    return 0;
}