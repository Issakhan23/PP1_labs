// 1008 Grades for the students
// A teacher has many students and wants to assign final grades based on their performance throughout the semester. Each student has 16 grades:

// 15 weekly grades.

// 1 final exam grade

// Your task is to help the teacher calculate the course grade for each student and then assign a letter grade according to the grading table below:



// Letter	Range
// A	95+
// A-	90-94
// B+	85–89
// B	80–84
// B-	75-79
// C+	70-74
// C	65-69
// C-	60-64
// D+	55-59
// D	50-54
// F	< 50




#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define struct for Student with all needed functionality
struct Student {
    int weeklyGrades[15];  // 15 weekly grades (0-4 each)
    int finalExam;         // Final exam grade (0-40)
    string letterGrade;    // Store the calculated letter grade
    
    // Method to read student data
    void readData() {
        // Read 15 weekly grades
        for (int i = 0; i < 15; i++) {
            cin >> weeklyGrades[i];
        }
        // Read final exam grade
        cin >> finalExam;
    }
    
    // Calculate total score
    int calculateTotal() const {
        int weeklyTotal = 0;
        for (int i = 0; i < 15; i++) {
            weeklyTotal += weeklyGrades[i];
        }
        return weeklyTotal + finalExam;
    }
    
    // Determine letter grade
    void calculateLetterGrade() {
        int total = calculateTotal();
        
        if (total >= 95) letterGrade = "A";
        else if (total >= 90) letterGrade = "A-";
        else if (total >= 85) letterGrade = "B+";
        else if (total >= 80) letterGrade = "B";
        else if (total >= 75) letterGrade = "B-";
        else if (total >= 70) letterGrade = "C+";
        else if (total >= 65) letterGrade = "C";
        else if (total >= 60) letterGrade = "C-";
        else if (total >= 55) letterGrade = "D+";
        else if (total >= 50) letterGrade = "D";
        else letterGrade = "F";
    }
    
    // Method to output the result
    void printGrade() const {
        cout << "Student grade: " << letterGrade << endl;
    }
};

int main() {
    int n;
    cin >> n;
    
    vector<Student> students(n);
    
    // Process each student
    for (int i = 0; i < n; i++) {
        students[i].readData();           // Read input into struct
        students[i].calculateLetterGrade(); // Calculate grade
    }
    
    // Output all results
    for (const Student& student : students) {
        student.printGrade();
    }
    
    return 0;
}