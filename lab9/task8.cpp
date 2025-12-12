// 908 Attendance pliz
// Askar Agay, due to the fact that few students remain in practice, decided to take attendance. He has a list of students who came to practice for November. Askar Agay decided to add +1 points to all students who were in practice at least 3 three different days. Keep in mind that Askar Agay could take attendance on the same day several times!
// Use map<string, set<int> > to solve this problem.


#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, set<int>> attendance;

    // Reading input
    for (int i = 0; i < n; i++) {
        string name;
        int day;
        cin >> name >> day;
        attendance[name].insert(day);
    }

    // Output results
    for (const auto& entry : attendance) {
        cout << entry.first << " ";
        if (entry.second.size() >= 3) {
            cout << "+1\n";
        } else {
            cout << "NO BONUS\n";
        }
    }

    return 0;
}