//520
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    
    int bestAthlete = 0;
    long long bestThrow = -1; 
    long long bestSum = -1;
    
    for (int i = 0; i < n; i++) {
        long long maxThrow = -1;
        long long sum = 0;
        
        
        for (int j = 0; j < m; j++) {
            long long throwValue;
            cin >> throwValue;
            
           
            if (throwValue > maxThrow) {
                maxThrow = throwValue;
            }
            
            
            sum += throwValue;
        }
        
        
        if (maxThrow > bestThrow) {
            bestThrow = maxThrow;
            bestSum = sum;
            bestAthlete = i;
        } 
        else if (maxThrow == bestThrow) {
            if (sum > bestSum) {
                bestSum = sum;
                bestAthlete = i;
            }
            
        }
    }
    
    cout << bestAthlete << endl;
    
    return 0;
}