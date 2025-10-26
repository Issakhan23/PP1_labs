//404 error
#include <iostream>
using namespace std;
int main() {
    int max = 0; 
    unsigned int n;
    cin >> n;
    int x[n];
    cin >> x[0];
    max = x[0];
    for(int i = 1; i < n; ++i) {
        cin >> x[i];
        if (x[i] > max) {
            max = x[i];
        }
    }
    cout << max;


    return 0;
}