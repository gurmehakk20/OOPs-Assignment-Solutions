#include<iostream>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    
    int arr[n];
    int mat[x][y];
    int j = 0;
    int k = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mat[j][k] = arr[i];
        if (k == y-1){
            j++; k=0;
        } else {
            k++;
        }
    }

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            cout << mat[i][j] << " ";
        } cout << endl;
    }

    return 0;
}