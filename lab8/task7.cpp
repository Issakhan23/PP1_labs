//807 GPA very hard 

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    double totalWeightedGP = 0.0;
    int totalCredits = 0;
    
    for (int i = 0; i < n; i++) {
        int a1, a2, final, credits;
        cin >> a1 >> a2 >> final >> credits;
        
        double gp = 0.0;
        int totalPoints = a1 + a2 + final;
        
        // Check if student passed conditions
        if ((a1 + a2) >= 30 && final >= 20) {
            if (totalPoints >= 95) {
                gp = 4.0;
            } else if (totalPoints >= 50) {
                int intervals = (totalPoints - 50) / 5;
                gp = 1.0 + intervals * (1.0 / 3.0);
            }
        }
        
        totalWeightedGP += gp * credits;
        totalCredits += credits;
    }
    
    double gpa = totalWeightedGP / totalCredits;
    cout << fixed << setprecision(6) << gpa << endl;
    
    return 0;
}