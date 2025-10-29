//710 Books
#include <iostream>

using namespace std;

void process(int a[], int n, int x) {
    bool Work;
    for (int i = 0; i < n; ++i) {
        if (x == a[i]) {
            Work = true;
            break;
        } else {
            Work = false;
        }
    }
    if (Work == true) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main() {
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> x;
    process(arr, n, x);
    return 0;
}