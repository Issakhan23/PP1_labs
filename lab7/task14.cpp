//714 Array transpose
#include <iostream>

using namespace std;

void process(int** a, int n, int m) {
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            cout << a[i][j];
            if (i < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    // Dynamic allocation
    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[m];
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    process(arr, n, m);
    
    // Clean up memory
    // for (int i = 0; i < n; ++i) {
    //     delete[] arr[i];
    // }
    // delete[] arr;
    
    return 0;
}