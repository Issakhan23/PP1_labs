//1012
#include <iostream>

using namespace std;

void read_array(int * arr, int n){
    for(int i = 0; i < n; ++i){
        cin >> *(arr + i);
    }
}

void print_array(int * arr, int n){
    for(int i = 0; i < n; ++i){
        cout <<  *(arr + i) << " ";
    }
}

int max_in_array(int * arr, int n){
    int max_index = 0;
    for(int i = 1; i < n; ++i){
        if(*(arr + i) > *(arr + max_index)){
            max_index = i;
        }
    }
    return *(arr + max_index);
}


int main(){

    int n;
    cin >> n;

    int a[n];

    read_array(a, n);
    //print_array(a, n);
    cout << max_in_array(a, n);

    return 0;
}