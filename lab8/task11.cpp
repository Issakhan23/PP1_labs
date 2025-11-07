//811 Attendance.

#include <iostream>
#include <set>

using namespace std;



int main() {
    int n;
    cin >> n;
    set<string> s;
    string attend;
    int c = 0;
    for (int i = 0; i < n; ++i) {
        cin >> attend;
        s.insert(attend);
    }
    for (int i = 0; i < s.size(); ++i) {
        c++;
    }
    cout << c << endl;

    return 0;
}