//711 Difference between two arrays
#include <iostream>

using namespace std;

void process(int a[], int a2[], int n) {
    for (int i = 0; i < n; ++i) {
        if (a2[i] > a[i]) {
            a[i] = a2[i] - a[i];
            cout << a[i] << " ";
        } else {
            a[i] = a[i] - a2[i];
            cout << a[i] << " ";
        }
        
    }
}

int main() {
    int n, x;
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