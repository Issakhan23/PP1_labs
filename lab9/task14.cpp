// 914 Wizards
// Given an array wizards denoting magic strengths of N wizards, we start with an empty battlefield. At each minute i, the i^th wizard joins the battlefield and defeats all wizards whose strength is less than or equal to his magic strength.

// Find the number of wizards alive in the battlefield at the end of the i^th minute for each  0 <= i < N.



#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> wizards(n);
    for (int i = 0; i < n; i++) {
        cin >> wizards[i];
    }
    
    stack<int> st;
    vector<int> result(n);
    
    for (int i = 0; i < n; i++) {
        // Remove wizards with strength <= current wizard's strength
        while (!st.empty() && st.top() <= wizards[i]) {
            st.pop();
        }
        // Current wizard joins
        st.push(wizards[i]);
        // Number alive = stack size
        result[i] = st.size();
    }
    
    for (int i = 0; i < n; i++) {
        cout << result[i] << (i == n-1 ? "\n" : " ");
    }
    
    return 0;
}