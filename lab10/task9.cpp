// 1009 The Best Student
// The Office of the Registrar needs your help to manage student records! To help them, create a new program.

// The program takes 
//  records of students. Each record contains the student’s unique ID, name, and grades in three subjects: Calculus, English, and PP1. Then the program needs to output 2 items:

// the records of the students with their IDs, names and average grades;

// the record of the best student — the student with the highest average grade.

// Note that if there are 2 or more students with identical highest average grades, you need to output the information of the student who appeared earlier in the input.

// Important: declare and use the struct Student to solve this problem!




#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// Helper function to format double without trailing zeros
string formatDouble(double value) {
    stringstream ss;
    ss << fixed << setprecision(4) << value;
    string result = ss.str();
    
    // Remove trailing zeros
    size_t dotPos = result.find('.');
    if (dotPos != string::npos) {
        // Remove trailing zeros
        result.erase(result.find_last_not_of('0') + 1, string::npos);
        // If last character is '.', remove it too
        if (result.back() == '.') {
            result.pop_back();
        }
    }
    
    return result;
}

// Define struct for Student
struct Student {
    int id;
    string name;
    int calculus;
    int english;
    int ppi;
    double average;
    
    // Method to calculate average
    void calculateAverage() {
        average = (calculus + english + ppi) / 3.0;
    }
    
    // Method to print student info
    void printInfo() const {
        cout << id << " " << name << ": Average=" << formatDouble(average) << endl;
    }
    
    // Method to print best student info
    void printBestStudent() const {
        cout << "The best student: " << name << " with the average grade of " << formatDouble(average) << endl;
    }
};

int main() {
    int n;
    cin >> n;
    
    vector<Student> students(n);
    int bestStudentIndex = 0;
    double bestAverage = -1.0;
    
    // Read all students and calculate averages
    for (int i = 0; i < n; i++) {
        cin >> students[i].id >> students[i].name >> students[i].calculus >> students[i].english >> students[i].ppi;
        students[i].calculateAverage();
        
        // Track best student (first one with highest average)
        if (students[i].average > bestAverage) {
            bestAverage = students[i].average;
            bestStudentIndex = i;
        }
    }
    
    // Output all students
    for (const Student& student : students) {
        student.printInfo();
    }
    
    // Output best student
    students[bestStudentIndex].printBestStudent();
    
    return 0;
}