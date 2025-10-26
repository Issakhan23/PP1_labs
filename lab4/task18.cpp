//418
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, curr_gcd = 1, max_gcd = 1, temp;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort (a, a+n);
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++){
            int b = a[i], c = a[j];
            while (c != 0) {    
                temp = b % c; 
                b = c;            
                c = temp;
            curr_gcd = b;
            }
            if (max_gcd < curr_gcd) max_gcd = curr_gcd;
        }
    }
    cout << max_gcd;

    return 0;
}