//412


//not right just leave these alone
// #include <iostream>
// using namespace std;
// int main() {
//     long n, sum = 0;
//     long a[n];
//     for (int i = 0; i < sizeof(a); ++i) {
//         cin >> a[i];
//         sum = sum + a[i];
//     }
//     cout << sum;


//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int x, sum = 0;
    while (cin >> x) sum += x;
    cout << sum;
    return 0;
}