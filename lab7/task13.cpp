//713 Missing Group.
#include <iostream>
using namespace std;

int findWithNumber(int arr[], int n, int X) {

    bool exists[1001] = {false};

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= 1000) {
            exists[arr[i]] = true;
        }
    }
    int count = 0;
    for (int i = 1; i <= 1000; i++) {
        if (!exists[i]) {
            count++;
            if (count == X) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    int arr[1000];
    int n = 0;
    int num;
    
    while (cin >> num) {
        arr[n++] = num;
        if (cin.peek() == '\n') {
            break;
        }
    }
    
    int X;
    cin >> X;

    int result = findWithNumber(arr, n, X);
    cout << result << endl;
    
    return 0;
}