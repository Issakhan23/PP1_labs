// 915 Candy shop
// A candy shop has a stack of boxes with candies, each box containing a positive number of candies. Initially, the stack is empty. During each of the next N minutes, either one of these two things happens:

// * The box of candies on top of the stack gets sold.

// * The shop receives a box of candies from the warehouse and a clerk puts it on top of the stack.

// What happens is determined by the integers a(i) in the array a: if a(i) == 0, the shop sells a box. If a(i) > 0, it receives a box containing a(i) candies.

// * It is guaranteed that the shop gets a buyer only when it has a non-empty stack.

// * The capacity of the stack is infinite.

// You need to output the number of candies in the sold box each time the shop sells a box.






#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    stack<int> candyStack;
    vector<int> soldBoxes;
    
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        
        if (a > 0) {
            // Receiving a box with a[i] candies
            candyStack.push(a);
        } else if (a == 0) {
            // Selling the top box
            int topCandies = candyStack.top();
            candyStack.pop();
            soldBoxes.push_back(topCandies);
        }
    }
    
    // Output results
    if (soldBoxes.empty()) {
        cout << -1 << endl;
    } else {
        for (size_t i = 0; i < soldBoxes.size(); i++) {
            cout << soldBoxes[i];
            if (i != soldBoxes.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}