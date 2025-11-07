//815 Max map

#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<int, int> numMap;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numMap[num] = 1;  
    }
    cout << numMap.rbegin()->first << endl;
    
    return 0;
}