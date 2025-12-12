// 913 Bracket sequence
// You are given a bracket sequence. Your task is to identify whether this bracket sequence is correct or not. Note that a bracket sequence is correct if it is possible to get a correct mathematical expression by adding "+"-s and "1"-s to it. For example, sequences "(())()", "()" and "(()(()))" are correct, while ")(", "(()" and "(()))(" are not.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int balance = 0;
    
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }
        
        // If balance goes negative at any point, it's invalid
        if (balance < 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    // Valid if balance is zero (all opened brackets are closed)
    if (balance == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}