//516
#include <iostream>

using namespace std;

int main(){

    int n,m;

    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = 1;
        }
    }

    int k;
    int x1, y1, x2, y2;
    cin >> k;

    for(int i = 0; i < k; ++i){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int r = x1; r < x2; ++r){
            for(int c = y1; c < y2; ++c){
                a[r][c] = 0;
            }
        }
    }

    int sum = 0;

     for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            sum += a[i][j];
        }
    }

    cout << sum;


    return 0;
}