// 905 2'nd Max
// Given a list of n numbers, determine how many times the 2’nd max appears in the list. Use map to solve this problem.



#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    map<int, int> freq;
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        freq[v[i]]++;
    }
    
    sort(v.rbegin(), v.rend());

    int second_max = v[0];
    for (int i = 0; i < n; ++i) {
        if (v[i] < v[0]) {
            second_max = v[i];
            break;
        }
    }
    
    int c = freq[second_max];
    
    cout << c << endl;

    return 0;
}