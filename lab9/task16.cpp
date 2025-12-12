// 916 Black Friday!
// Imagine that it’s Black Friday again and you want to go shopping in your favorite shop and they suggest a special offer. Given the array prices where prices[i] is the price of the i-th item in a shop. There is a special discount for items in the shop, if you buy the i-th item, then you’ll receive a special discount, which is equal to prices[j] where j is the minimum index such that j > i and prices[j] <= prices[i], otherwise, you will not receive any discount at all. Print the array of final prices after using this promotion.



#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    vector<int> finalPrices(n);
    
    for (int i = 0; i < n; i++) {
        int discount = 0;
        // Find the first price[j] <= prices[i] where j > i
        for (int j = i + 1; j < n; j++) {
            if (prices[j] <= prices[i]) {
                discount = prices[j];
                break;
            }
        }
        finalPrices[i] = prices[i] - discount;
    }
    
    // Output results
    for (int i = 0; i < n; i++) {
        cout << finalPrices[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}