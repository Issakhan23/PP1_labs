//801  Infinite Sum?
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int num;
    
    while (cin >> num) {
        numbers.push_back(num);
    }
    
    int sum = 0;
    for (int n : numbers) {
        sum += n;
    }

    cout << sum << endl;
    
    return 0;
}