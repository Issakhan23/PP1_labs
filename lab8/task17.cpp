//817 Tripple Contacts

#include <iostream>
#include <string>
#include <map>


using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    map<string, int> fr;
    for (int i = 0; i < n; ++i) {
        string phone;
        cin >> phone;
        fr[phone]++;
    }

    for (map<string, int>::iterator it = fr.begin(); it != fr.end(); ++it) {
        if (it->second == 3) {
            count++;
        }
    }


    cout << count << endl;



    return 0;
}