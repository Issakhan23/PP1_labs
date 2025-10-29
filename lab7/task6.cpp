//706 Lucky ticket
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string luckynum(int a) {
    int sum = 0, last = a % 10, temp = a;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (last != 0 && sum % last == 0) {
        return "Yes";
    } else {
        return "No";
    }
}


int main() {
    int a;
    cin >> a;
    cout << luckynum(a);

    return 0;
}