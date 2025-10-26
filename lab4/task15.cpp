//415
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, curr = 1, max_fr = 1;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int freq[n];
    for (int i = 0; i < n; i++) freq[i] = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) curr += 1;
        else {freq[i-1] = curr; curr = 1;}
        
        max_fr = max(max_fr, freq[i-1]);
    }
    int modes[n], m = 0;
    for (int i = n-1; i >= 0; i--) {
        if ((i == n-1 || arr[i] != arr[i+1]) && freq[i] == max_fr){
            modes[m++] = arr[i];            
        }
    }
    for (int i = 0; i < m; i++) cout << modes[i] << " ";
  

    return 0;
}