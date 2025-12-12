// 917 Translate statement from infix to postfix (RPN)
// Student Ricardo wants to attend a dance competition. To be let out early, he needs to solve a problem. He needs to transform a regular mathematical expression in infix notation into a postfix notation without parentheses. Another name for this desired postfix notation without parentheses is reverse polish notation (RPN or reverse Łukasiewicz notation).

// Help Milos get to the competition early.

// For example: “(2 * 6) + (5 / 9) + 0” => “2 6 * 5 9 / + 0 +”



#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Function to get precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int main() {
    string s;
    getline(cin, s);
    
    stack<char> operators;
    string result = "";
    bool prevWasDigit = false;
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        
        // Skip spaces
        if (c == ' ') continue;
        
        // If digit, add to output
        if (isdigit(c)) {
            // Add space before new number if needed
            if (prevWasDigit) {
                result += c;
            } else {
                if (!result.empty()) result += ' ';
                result += c;
                prevWasDigit = true;
            }
        }
        // If '(' push to stack
        else if (c == '(') {
            operators.push(c);
            prevWasDigit = false;
        }
        // If ')' pop until '('
        else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                result += ' ';
                result += operators.top();
                operators.pop();
            }
            operators.pop(); // Remove '('
            prevWasDigit = false;
        }
        // If operator
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                result += ' ';
                result += operators.top();
                operators.pop();
            }
            operators.push(c);
            prevWasDigit = false;
        }
    }
    
    // Pop remaining operators
    while (!operators.empty()) {
        result += ' ';
        result += operators.top();
        operators.pop();
    }
    
    cout << result << endl;
    
    return 0;
}