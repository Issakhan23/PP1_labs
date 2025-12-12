// 906 Registration
// Students of the first course want to register on ejudge. You have login requests. If the login is not registered yet, print “new user added”; if this login already exists, print “user already exists”.


#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> w;
    vector<string> v(n);
    map<string, int> freq;
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        freq[v[i]]++;
        if(freq[v[i]] > 1) {
            w.push_back("user already exists");
        } else if (freq[v[i]] == 1) {
            w.push_back("new user added");
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << w[i] << endl;
    }

    return 0;
}