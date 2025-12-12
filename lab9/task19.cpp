// 919 Queue in the Bauyrlar Bank
// Mr. Smith is the director of “Bauyrlar” Bank. Miss Gray is his secretary. The director tasked her with creating a program to effectively track the bank’s visitors.

// The program should allow customers to join the line, be served in order, and display the current state of the line.

// Help Miss Gray create this app. Otherwise, she will have to do a lot of manual labor.


// The “name” in a “ARRIVE” command is a string without spaces (length 1 to 20).
// The program receives a sequence of commands:
// “ARRIVE name” — A customer with the given name arrives and joins the line.
// “SERVE ” — The first customer in line is served and removed from the queue. If this command is called when the line is empty, print “No customers to serve”.
// “SHOW” — Display the current state of the line (all customers in the order in which they arrived (FIFO)) separated by spaces (“ ”). If this command is called when the line is empty, print “Line is empty”.


// For “ARRIVE name” → “name joined the line”.
// For “SERVE” → “name has been served” or “No customers to serve” if empty.
// For “SHOW” → “Line: name1 name2 ... nameN” or “Line is empty” if no customers.



#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore newline after n
    
    queue<string> line;
    
    for (int i = 0; i < n; i++) {
        string command;
        getline(cin, command);
        
        stringstream ss(command);
        string cmd;
        ss >> cmd;
        
        if (cmd == "ARRIVE") {
            string name;
            ss >> name;
            line.push(name);
            cout << name << " joined the line" << endl;
        }
        else if (cmd == "SERVE") {
            if (line.empty()) {
                cout << "No customers to serve" << endl;
            } else {
                string servedName = line.front();
                line.pop();
                cout << servedName << " has been served" << endl;
            }
        }
        else if (cmd == "SHOW") {
            if (line.empty()) {
                cout << "Line is empty" << endl;
            } else {
                cout << "Line:";
                // To show all customers in order, we need to traverse the queue
                // We'll use a temporary queue to preserve the original
                queue<string> temp = line;
                while (!temp.empty()) {
                    cout << " " << temp.front();
                    temp.pop();
                }
                cout << endl;
            }
        }
    }
    
    return 0;
}