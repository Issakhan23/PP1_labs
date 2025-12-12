// 920 Simple text editor
// Richard Stallman is building a simple open-source text editor under the GNU GPL 3 license that supports undo and redo operations. Each time the user performs an action (like typing or deleting), it is recorded. The user can then undo previous actions or redo actions that were undone.
// The new text editor supports the following commands:

// * “DO action” — Perform a new action.

// * “UNDO” — Undo the most recent action (if any).

// * “REDO” — Redo the most recently undone action (if any).

// * “HISTORY” — Print all actions currently in the undo history, from oldest to newest.


// For each “HISTORY” command, print the undo history as a space-separated list of actions.
// If the undo history is empty, print “EMPTY”.





#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    stack<string> undoHistory;
    stack<string> redoHistory;
    
    for (int i = 0; i < n; i++) {
        string command;
        getline(cin, command);
        
        stringstream ss(command);
        string cmd;
        ss >> cmd;
        
        if (cmd == "DO" || cmd == "00") {
            string action;
            ss >> action;
            
            undoHistory.push(action);
            // Clear redo stack on new action
            while (!redoHistory.empty()) {
                redoHistory.pop();
            }
        }
        else if (cmd == "UNDO") {
            if (!undoHistory.empty()) {
                string undone = undoHistory.top();
                undoHistory.pop();
                redoHistory.push(undone);
            }
        }
        else if (cmd == "REDO" || cmd == "RED0") { // Handle misspelling
            if (!redoHistory.empty()) {
                string redone = redoHistory.top();
                redoHistory.pop();
                undoHistory.push(redone);
            }
        }
        else if (cmd == "HISTORY") {
            if (undoHistory.empty()) {
                cout << "EMPTY" << endl;
            } else {
                // Transfer to vector to reverse order
                vector<string> history;
                stack<string> temp = undoHistory;
                
                while (!temp.empty()) {
                    history.push_back(temp.top());
                    temp.pop();
                }
                
                // Print from oldest to newest
                for (int j = history.size() - 1; j >= 0; j--) {
                    cout << history[j];
                    if (j > 0) cout << " ";
                }
                cout << endl;
            }
        }
    }
    
    return 0;
}