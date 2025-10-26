//405
//1 method 
/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long max_val;
    cin >> max_val;
    int pos = 1;  // Start with position 1

    for (int i = 2; i <= n; i++) {
        long long num;
        cin >> num;
        if (num > max_val) {
            max_val = num;
            pos = i;
        }
    }
    
    cout << pos;
    return 0;
}
*/

//2 method
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    long long max_val = x[0];
    int pos = 0;  

    for (int i = 1; i < n; i++) {  
        if (x[i] > max_val) {
            max_val = x[i];
            pos = i;
        }
    }
    
    cout << (pos + 1);  

    return 0;
}