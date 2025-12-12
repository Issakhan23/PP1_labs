// 911 || Where are the students from?
// Every year, at summer time, a selection committee takes documents of students from different places of KZ. They want to know the percentage of students from each place. Help them calculate it.


#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> names;
    vector<long long> counts;
    long long total = 0;

    for (int day = 0; day < N; day++) {
        int M;
        cin >> M;
        for (int i = 0; i < M; i++) {
            string place;
            long long num;
            cin >> place >> num;

            bool found = false;
            for (int k = 0; k < (int)names.size(); k++) {
                if (names[k] == place) {
                    counts[k] += num;
                    found = true;
                    break;
                }
            }
            if (!found) {
                names.push_back(place);
                counts.push_back(num);
            }
            total += num;
        }
    }

    // alphabetical order (simple sort that keeps counts paired)
    for (int i = 0; i < (int)names.size(); i++) {
        for (int j = i + 1; j < (int)names.size(); j++) {
            if (names[j] < names[i]) {
                swap(names[i], names[j]);
                swap(counts[i], counts[j]);
            }
        }
    }

    // Use 6 significant digits (no 'fixed') to match required output
    cout << setprecision(6);

    for (int i = 0; i < (int)names.size(); i++) {
        double percent = counts[i] * 100.0 / total;
        cout << names[i] << " " << percent << "\n";
    }

    return 0;
}