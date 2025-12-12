// 918 Queue to the Cinema 
// We have a queue of boys who want to buy tickets for their girlfriends to the movie. We are given n actions of two types:

// * The first type — a new boy with a given name gets to the end of the queue;

// * The second type — the first boy in the queue buys a ticket and leaves the queue.

// After each action, you must answer who is first in the queue right now, or show that the queue is empty and print "queue is empty".


#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    queue<string> q;
    
    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;
        
        if (type == 1) {
            // Add to queue
            string name;
            cin >> name;
            q.push(name);
        } else if (type == 2) {
            // Remove from queue if not empty
            if (!q.empty()) {
                q.pop();
            }
        }
        
        // Output current front or "queue is empty"
        if (q.empty()) {
            cout << "queue is empty" << endl;
        } else {
            cout << q.front() << endl;
        }
    }
    
    return 0;
}