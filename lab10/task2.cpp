// 1002 Seems easy but not.
// You’re given a text where you need to count how many times each word appears. Output the list of words with their corresponding counts. The list must be sorted by the count in descending order. If two counts are equal, sort lexicographically by the word.

// Hint: Use map<string, int> to count the words, but then transfer the key-value pairs into a vector<pair<string, int> > and implement a comparator function to sort this vector correctly.


// Input:
// some repeating words words words but

// Output:
// words : 3
// but : 1
// repeating : 1
// some : 1





#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct Word {
    string text;
    int count;

    Word() {
        text = "";
        count = 0;
    }

    Word(string t, int c) {
        text = t;
        count = c;
    }

    int compare(const Word& other) const {
        if (count > other.count) return 1;
        if (count < other.count) return -1;

        if (text < other.text) return 1;
        if (text > other.text) return -1;

        return 0;
    }

    void print() const {
        cout << text << " : " << count << "\n";
    }
};

bool cmp(const Word& a, const Word& b) {
    return a.compare(b) == 1;
}

int main() {
    string s;
    getline(cin, s);

    map<string, int> mp;
    string w = "";

    for (int i = 0; i <= (int)s.size(); i++) {
        if (i < (int)s.size() && s[i] != ' ') {
            w += s[i];
        } else {
            if (!w.empty()) {
                mp[w]++;
                w = "";
            }
        }
    }

    vector<Word> v;
    for (auto &p : mp) {
        v.push_back(Word(p.first, p.second));
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < (int)v.size(); i++) {
        v[i].print();
    }

    return 0;
}