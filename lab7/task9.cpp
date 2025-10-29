//709 Reverse the array
#include <iostream>

using namespace std;

void process(int a[], int n) {
    long long sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    process(arr, n);
    return 0;
}