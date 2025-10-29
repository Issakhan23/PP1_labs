//720 String calculator with functions - 2
//ONE — 1
//TWO — 2
//THR — 3
//FOU — 4
//FIV — 5
//SIX — 6
//SEV — 7
//EIG — 8
//NIN — 9
//ZER — 0
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int tripletToDigit(string triplet) {
    if (triplet == "ZER") return 0;
    if (triplet == "ONE") return 1;
    if (triplet == "TWO") return 2;
    if (triplet == "THR") return 3;
    if (triplet == "FOU") return 4;
    if (triplet == "FIV") return 5;
    if (triplet == "SIX") return 6;
    if (triplet == "SEV") return 7;
    if (triplet == "EIG") return 8;
    if (triplet == "NIN") return 9;
    return -1;
}
string digitToTriplet(int digit) {
    string triplets[] = {"ZER", "ONE", "TWO", "THR", "FOU", "FIV", "SIX", "SEV", "EIG", "NIN"};
    return triplets[digit];
}
int stringToNumber(string str) {
    int number = 0;
    for (int i = 0; i < str.length(); i += 3) {
        string triplet = str.substr(i, 3);
        int digit = tripletToDigit(triplet);
        number = number * 10 + digit;
    }
    return number;
}
string numberToString(int num) {
    if (num == 0) return "ZER";
    
    string result = "";
    int temp = num;
    int digits[100];
    int count = 0;
    
    while (temp > 0) {
        digits[count] = temp % 10;
        temp /= 10;
        count++;
    }
    for (int i = count - 1; i >= 0; i--) {
        result += digitToTriplet(digits[i]);
    }
    
    return result;
}

int main() {
    string expression;
    cin >> expression;
    
    string firstPart, secondPart;
    char operation;
    string result;
    
    // Find the operator and split the expression
    if (expression.find('+') != string::npos) {
        int pos = expression.find('+');
        firstPart = expression.substr(0, pos);
        secondPart = expression.substr(pos + 1);
        operation = '+';
    } else if (expression.find('*') != string::npos) {
        int pos = expression.find('*');
        firstPart = expression.substr(0, pos);
        secondPart = expression.substr(pos + 1);
        operation = '*';
    } else if (expression.find('-') != string::npos) {
        int pos = expression.find('-');
        firstPart = expression.substr(0, pos);
        secondPart = expression.substr(pos + 1);
        operation = '-';
    }
    
    // Convert to numbers
    int num1 = stringToNumber(firstPart);
    int num2 = stringToNumber(secondPart);
    
    // Perform the operation
    if (operation == '+') {
        result = numberToString(num1 + num2);
    } else if (operation == '*') {
        result = numberToString(num1 * num2);
    } else if (operation == '-') {
        result = numberToString(num1 - num2);
    }
    
    cout << result << endl;
    
    return 0;
}