// 1001 Hard-sort
// We hope you have learned from previous tasks how to use sort() and write a comparator function. Now, you are given a list of integer rows. This structure is often called a "jagged array", meaning that each row may have a different number of elements.

// Your task is to sort these rows in non-decreasing order based on a strict hierarchy of criteria. When comparing two rows, row A and row B, determine their order using the following rules:

// 1. Compare by sum: The row with the smaller sum of elements comes first.

// 2. Compare by size: If the sums are equal, the row with fewer elements comes first.

// 3. Compare by elements: If both the sums and the sizes are equal, compare the corresponding elements of the rows from left to right (A[0] with B[0], A[1] with B[1], etc). The row that has a smaller value at the first differing index comes first.

// 4. If all elements are equal, it means that the rows are in the correct order.



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct row{
    int sum;
    int size;
    vector<int> items;
    row(){
        sum = 0;
        size = 0;
    }
    void add_item(int x){
        items.push_back(x);
        sum += x;
        size++;
    }
    int compare(row other){
        if(sum < other.sum) return 1;
        if(sum == other.sum){
            if(size < other.size) return 1;
            if(size == other.size){
                for(int i = 0; i < size; ++i){
                    if(items[i] < other.items[i]) return 1;
                    else if(items[i] > other.items[i]) return -1;
                }
                return 0;
            }
            return -1;
        }
        return -1;
    }
    void read_data(){
        int m;
        cin >> m;
        int x;
        for(int i = 0; i < m; ++i){
            cin >> x;
            add_item(x);
        }
    }
    void print_data(){
        for(int i = 0; i < size; ++i){
            cout << items[i] << " ";
        }
        cout << endl;
    }
};

bool f(row u, row b){
    if(u.compare(b) < 0) return false;
    return true; 
}

int main(){

    int n;
    cin >> n;

    vector<row> v(n);

    for(int i = 0; i < n; ++i){
        v[i].read_data();
    }

    sort(v.begin(), v.end(), f);

    for(int i = 0; i < n; ++i){
        v[i].print_data();
    }

    

    return 0;
} 