#include<bits/stdc++.h> 
using namespace std; 

int main(){
    int m, n; cin >> m >> n;
    int** arr = new int*[m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; ){
        for (int j = 0; j < n && i < m; j++){
            cout << arr[i][j] << ", ";
        } i++;
        for (int j = n-1; j >= 0 && i < m; j--){
            cout << arr[i][j] << ", ";
        } i++;
    } cout << "END" ;
}
