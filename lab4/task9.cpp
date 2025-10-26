//409
#include <iostream>
using namespace std;
int main() {
    int n = 0, l, r;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }    

    int left = (l - 1);
    int right = (r - 1);

    while(left < right) {
            int t = a[left];
            a[left] = a[right];
            a[right] = t;
            left++;
            right--;
        }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}