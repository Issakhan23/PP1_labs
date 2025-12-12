// 912 Queue on the Outside but Stack Inside
// Aidar in queue order puts zeros and ones in a row. He hates ones, and if two ones are located beside each other, then he removes them. You have the order in which Aidar is going to put numbers.Your task is to find the final row.

// Use stack to solve this problem.

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;

    for (char c : s) {
        if (!st.empty() && st.top() == '1' && c == '1') {
            // If current char is '1' and top of stack is also '1', remove the top
            st.pop();
        } else {
            // Otherwise, push to stack
            st.push(c);
        }
    }

    // Build result from stack (reverse order)
    string result = "";
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());

    cout << result << endl;

    return 0;
}