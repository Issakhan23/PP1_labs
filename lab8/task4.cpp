//804 Find the lost number.
#include <iostream>
#include <vector>


using namespace std;

int findMissingNumber(const vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; ++i) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int missing = findMissingNumber(nums);
    cout << missing << endl;
    
    return 0;
}