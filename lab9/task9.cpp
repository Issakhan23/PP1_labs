// 909 GPA Problem, Again!
// We are dealing with one more problem about GPA. You are given n GPA records, with each one consisting of the name of the student and his or her GPA for some semester. For one student, there may be several records of GPA (for different semesters). The overall GPA of a student is calculated as the average of all his or her GPA-s across all the semesters.
// Your task is to calculate the overall GPA for all students and print this information sorted by students’ names alphabetically.

// Use map<pair<gpa_sum, gpa_cnt> > to solve this problem.


#include <iostream>
#include <map>
#include <iomanip>

using namespace std;


int main() {
    int n;
    cin >> n;
    map<string, pair<double, int>> studentGPA;

    
    for (int i = 0; i < n; i++) {
        string name;
        int gpa;
        cin >> name >> gpa;


        if (studentGPA.find(name) == studentGPA.end()) {
            studentGPA[name] = make_pair(gpa, 1);
        } else {
            studentGPA[name].first += gpa;
            studentGPA[name].second += 1;
        }
    }

    // Output results
    cout << fixed << setprecision(3);
    for (auto& entry : studentGPA) {
        string name = entry.first;
        double totalGPA = entry.second.first;
        int count = entry.second.second;
        double avgGPA = totalGPA / count;

        cout << name << ": " << avgGPA << endl;
    }



    return 0;
}