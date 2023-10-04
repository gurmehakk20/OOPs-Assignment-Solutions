

#include<iostream>
using namespace std;
int main()
{
    int m, n; cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for (int k = 0; k < m + n -1; k++){
        int i, j ;

        if (k < m){
            i = k;
            j = 0;
        } else {
            i = m-1;
            j = k - (m-1);
        }

        while (i >= 0 && j < n){
            cout << arr[i][j] << " ";
            i--;
            j++;
        } cout << endl;
    }
    return 0;
}