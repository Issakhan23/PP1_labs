//819 Aida and korean serials
//Aida is a very good girl, but there is one thing, she is fond of doramas

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> doramas;
    
    for (int i = 0; i < n; i++) {
        string name;
        int episodes;
        cin >> name >> episodes;
        
        doramas[name] += episodes;
    }
    
    for (auto& drama : doramas) {
        cout << drama.first << " " << drama.second << endl;
    }
    
    return 0;
}