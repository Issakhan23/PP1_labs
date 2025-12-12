// 1005 Closest point
// You are given a single point P in x, y coordinates system, and also a list of n points.

// You have to sort points in the list by their proximity to the point P in ascending order, i.e. the closest point to P goes first.

// Create a struct point to solve the problem.



// Determine the distance between two points by sqrt((x(2) - x(1))^2 + (y(2) - y(1))^2 )

// Write a comparator in order to be able to sort points.




#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct student{
    int x;
    int y;
    double d;
};

void print3(student s){
    cout << s.x << " " << s.y << " " << endl;
}


bool f3(student s1, student s2){
    if(s1.d > s2.d) return false;
    return true;
}

int main(){

    vector<student> students;
    int xo, yo;
    cin >> xo >> yo;
    int n;
    cin >> n;
    student s;

    for(int i = 0; i < n; ++i){
        cin >> s.x >> s.y;
        s.d = sqrt(pow(s.x - xo, 2) + pow(s.y - yo, 2));
        students.push_back(s);
    }
    
    sort(students.begin(), students.end(), f3);

    for(int i = 0; i < n; ++i){
        print3(students[i]);
    }

    return 0;
}