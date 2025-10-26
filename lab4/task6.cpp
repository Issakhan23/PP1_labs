//406
#include <iostream>
using namespace std;
int main() {
    int max = 0, min = 0; 
    unsigned int n;
    cin >> n;
    int x[n];
    int y[n];
    cin >> x[0];
    max = x[0];
    min = x[0];
    for(int i = 1; i < n; ++i) {
        cin >> x[i];
        if (x[i] > max) {
            max = x[i];
        }
        if (x[i] < min) {
            min = x[i];
        }
    } 
    for (int i = 0; i < n; ++i) {
        if (x[i] == max) {
            x[i] = min;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << x[i] << " ";
    }

    return 0;
}