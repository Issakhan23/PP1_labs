// 1004 Points again... use struct



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x;
    int y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int a, int b) {
        x = a;
        y = b;
    }

    int compare(const Point& other) const {
        if (x < other.x) return 1;
        if (x > other.x) return -1;

        if (y < other.y) return 1;
        if (y > other.y) return -1;

        return 0;
    }

    void print() const {
        cout << x << " " << y << "\n";
    }
};

bool cmp(const Point& a, const Point& b) {
    return a.compare(b) == 1;
}

int main() {
    int n;
    cin >> n;

    vector<Point> v(n);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v[i] = Point(x, y);
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++) {
        v[i].print();
    }

    return 0;
}