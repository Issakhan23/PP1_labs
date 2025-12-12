//1013



// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
    
//     int prices[N];
    
//     // Read prices using pointer
//     int* ptr = prices;
//     for (int i = 0; i < N; i++) {
//         cin >> *(ptr + i);
//     }
    
//     // Calculate sum using pointer traversal
//     int sum = 0;
//     ptr = prices; // Reset pointer to beginning
//     for (int i = 0; i < N; i++) {
//         sum += *(ptr + i);
//     }
    
//     // Calculate average
//     double average = static_cast<double>(sum) / N;
    
//     // Output results with exact formatting
//     cout << "Prices:";
//     ptr = prices; // Reset pointer to beginning
//     for (int i = 0; i < N; i++) {
//         cout << " " << *(ptr + i);
//     }
//     cout << endl;
    
//     cout << "Total: " << sum << endl;
//     cout << "Average: " << fixed << setprecision(3) << average << endl;
    
//     return 0;
// }






#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int prices[N];
    
    // Read prices using pointer
    int* ptr = prices;
    for (int i = 0; i < N; i++) {
        cin >> *(ptr + i);
    }
    
    // Calculate sum using pointer traversal
    int sum = 0;
    ptr = prices; // Reset pointer to beginning
    for (int i = 0; i < N; i++) {
        sum += *(ptr + i);
    }
    
    // Calculate average
    double average = static_cast<double>(sum) / N;
    
    // Output results with exact formatting
    cout << "Prices:";
    ptr = prices; // Reset pointer to beginning
    for (int i = 0; i < N; i++) {
        cout << " " << *(ptr + i);
    }
    cout << endl;
    
    cout << "Total: " << sum << endl;

    // ---- ONLY THIS PART IS MODIFIED ----
    // Convert formatted value to string and remove trailing zeros
    {
        ostringstream ss;
        ss << fixed << setprecision(3) << average;
        string s = ss.str();

        // Remove trailing zeros
        while (!s.empty() && s.back() == '0') {
            s.pop_back();
        }
        // Remove dot if nothing after it
        if (!s.empty() && s.back() == '.') {
            s.pop_back();
        }

        cout << "Average: " << s << endl;
    }
    // -------------------------------------

    return 0;
}