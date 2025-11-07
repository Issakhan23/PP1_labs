//805 Bob and Pillars.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> pillars(N);
    for (int i = 0; i < N; i++) {
        cin >> pillars[i];
    }
    
    int Q;
    cin >> Q;

    int count;
    string results[Q];

    for (int q = 0; q < Q; q++) {
        int L, R;
        cin >> L >> R;
        
        count = 0;
        int max_height = -1;

        for (int i = L; i <= R; i++) {
            if (pillars[i] > max_height) {
                count++;
                max_height = pillars[i];
            }
        }
        results[q] = to_string(count);
    }    
        
    for (int q = 0; q < Q; q++) {
         cout << results[q] << endl;
    }
       
    
    
    return 0;
}