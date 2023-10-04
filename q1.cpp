#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int k[100001], t[100001];
    int curr[n];
    int total = 0;
    for (int i= 0; i < n; i++){
        cin >> k[i] >> t[i];
        total += k[i]*t[i];
        curr[i] = total;
    }

    int v[100001];
    for (int i = 0; i < m; i++){
        cin >> v[i];
    }
    int j = 0;
    
    for (int i = 0; i < m && j < n; ){
        if (v[i] <= curr[j]){
            cout << j+1 << endl;
            i++;
        } else {
            j++;
        }
    }
}
