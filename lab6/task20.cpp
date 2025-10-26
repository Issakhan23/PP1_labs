//620
#include <iostream>
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
    int plusPos = expression.find('+');
    string firstPart = expression.substr(0, plusPos);
    string secondPart = expression.substr(plusPos + 1);
    int num1 = stringToNumber(firstPart);
    int num2 = stringToNumber(secondPart);
    int sum = num1 + num2;
    string result = numberToString(sum);
    
    cout << result << endl;
    
    return 0;
}