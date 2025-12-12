// 1007 Important dates.
// Professor of History during the lecture says a lot of important dates, but they come in a random-like order. You should listen for all the dates the professor says, and then sort them to restore the chronological order of the events. Use struct as a part of the solution to the problem.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Define a struct for Date
struct Date {
    int day;
    int month;
    int year;
};

// Comparison function for sorting
bool compareDates(const Date& a, const Date& b) {
    if (a.year != b.year) return a.year < b.year;
    if (a.month != b.month) return a.month < b.month;
    return a.day < b.day;
}

int main() {
    vector<Date> dates;
    
    while (true) {
        string input;
        getline(cin, input);
        
        // Check for termination
        if (input == "0") break;
        
        // Parse the date
        Date d;
        sscanf(input.c_str(), "%d %d %d", &d.day, &d.month, &d.year);
        dates.push_back(d);
    }
    
    // Sort dates chronologically
    sort(dates.begin(), dates.end(), compareDates);
    
    // Output dates in required format
    for (const auto& date : dates) {
        printf("%02d %02d %04d\n", date.day, date.month, date.year);
    }
    
    return 0;
}