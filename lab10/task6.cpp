// 1006 Daniil's Watch
// Daniil was given a very expensive Rolex watch for his birthday. But it turned out to be defective. Now the watch needs repair — you need to sort the time, given to you as n rows with 3 columns. The first column is hours, the second is minutes and the last is seconds. Create a struct that can store these 3 values, store them in a vector and write a comparator that will allow sort() to work.



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    int x;
    int y;
    int d;
};

void print3(student s){
    cout << s.x << " " << s.y << " " << s.d << endl;
}


bool f3(student s1, student s2){
    if(s1.x > s2.x) {
        return false;
    } else if(s1.x == s2.x) {
        if(s1.y > s2.y) {
            return false;
        } else if(s1.y == s2.y) {
            if(s1.d > s2.d) {
                return false;
            } else {
                return true;
            }
        } else {
            return true;
        }
    } else {
        return true;
    }
    
}

int main(){

    vector<student> students;
    
    int n;
    cin >> n;
    student s;

    for(int i = 0; i < n; ++i){
        cin >> s.x >> s.y >> s.d;
        students.push_back(s);
    }
    
    sort(students.begin(), students.end(), f3);

    for(int i = 0; i < n; ++i){
        print3(students[i]);
    }

    return 0;
}