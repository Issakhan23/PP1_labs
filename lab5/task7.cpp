//507
#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    char arr[n][n];
    int k;

    if(n % 2 == 1){
        for(int i = 0; i < n; i++){
            k = n - 1 - i;
            for(int j = 0; j < n; j++){
                if(k > 0){
                    arr[i][j] = '.'; 
                    k--;
                }else{
                    arr[i][j] = '#';
                }
            }
        }
    }else{
        for(int i = 0; i < n; i++){
            k = i + 1;
            for(int j = 0; j < n; j++){
                if(k > 0){
                    arr[i][j] = '#'; 
                    k--;
                }else{
                    arr[i][j] = '.';
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
 