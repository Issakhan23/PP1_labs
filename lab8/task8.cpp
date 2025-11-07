//808 Businessman or businesswoman.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int maxStart = 0; 
    int minEnd = 24 * 60;
    int A, B, C, D;
    for (int i = 0; i < N; i++) {
        cin >> A >> B >> C >> D;
        
        int start = A * 60 + B;
        int end = C * 60 + D;
        
        if (start == end) {
            start = 0;
            end = 24 * 60;
        }
        
        else if (start > end) {
            end += 24 * 60;
        }
        
        maxStart = max(maxStart, start);
        minEnd = min(minEnd, end);
    }
    
    int overlap = minEnd - maxStart;
    

    if (overlap <= 0) {
        cout << 0 << endl;
    } else {
        
        if (overlap > 24 * 60) {
            overlap = 24 * 60;
        }
        cout << overlap * 2 << endl;
    }
    
    return 0;
}