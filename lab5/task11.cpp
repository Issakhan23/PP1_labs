//511
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    
    int minSum = 100000; 
    int minIndex = 0;
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            int grade;
            std::cin >> grade;
            sum += grade;
        }
        
        if (i == 0 || sum < minSum) {
            minSum = sum;
            minIndex = i;
        }
    }
    
    // Output 1-based index
    cout << minIndex + 1 << endl;
    
    return 0;
}