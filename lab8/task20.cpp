//820 MongoDB.

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, string> document;
    vector<string> outputs;
    
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        
        if (command == "set") {
            string key, value;
            cin >> key >> value;
            document[key] = value;
            
        } else if (command == "get") {
            string key;
            cin >> key;
            
            if (document.find(key) != document.end()) {
                outputs.push_back(document[key]);
            } else {
                outputs.push_back("KE: no key " + key + " found in the document");
            }
        }
    }
    
    for (const string& output : outputs) {
        cout << output << endl;
    }
    
    return 0;
}