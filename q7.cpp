#include<iostream>
using namespace std;
int main()
{
    int n, m; cin >> n >> m;
    int mat[n][m];
    int maxi = -1;
    int ans;
    for (int i = 0; i < n; i++){
        int c = 0;
        for (int j = 0; j < m; j++){
            cin >> mat[i][j];
            if (mat[i][j] == 1){
                c++;
            }
        }
        if (c > maxi){
            maxi = c;
            ans = i;
        }
    }
    cout << ans;

    


    return 0;
}