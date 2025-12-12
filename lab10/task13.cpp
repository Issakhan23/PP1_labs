//1013 Statistical analysis
// You are helping a PC components store manager analyze product prices. The store has several items, and the manager wants to know:

// * The list of all prices

// * The total sum of prices

// * The average price (as a decimal number)

// Instead of using array indices, you must use pointers to traverse and manipulate the array of prices.


#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int prices[N];
    
   
    int* ptr = prices;
    for (int i = 0; i < N; i++) {
        cin >> *(ptr + i);
    }
    
    
    int sum = 0;
    ptr = prices; 
    for (int i = 0; i < N; i++) {
        sum += *(ptr + i);
    }
    
    
    double average = static_cast<double>(sum) / N;
    
   
    cout << "Prices:";
    ptr = prices; 
    for (int i = 0; i < N; i++) {
        cout << " " << *(ptr + i);
    }
    cout << endl;
    
    cout << "Total: " << sum << endl;
    
    
    stringstream ss;
    ss << fixed << setprecision(3) << average; 
    
    string avgStr = ss.str();
    
    
    if (avgStr.find('.') != string::npos) {
        
        avgStr.erase(avgStr.find_last_not_of('0') + 1, string::npos);
        
        
        if (avgStr.back() == '.') {
            avgStr.pop_back();
        }
    }
    
    cout << "Average: " << avgStr << endl;
    
    return 0;
}








































// y = √x 