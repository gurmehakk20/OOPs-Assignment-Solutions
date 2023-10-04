#include<iostream>
#include <climits>
#include <algorithm>
using namespace std;
void solve(){
	cout << endl;
    int n; cin>> n;

    int roses[10001];
    for (int i = 0; i < n; i++){
        cin >> roses[i];
    }

    int m; cin >> m;

    int i = 0, j = n-1;

    sort(roses, roses + n);
    int a,b;

    while (i < j){
        int sum = roses[i] + roses[j];

        if (sum == m){
            a = roses[i];
            b = roses[j];
            i++;
            j--;
        } else if (sum < m){
            i++;
        } else {
            j--;
        }
    }

    cout << "Deepak should buy roses whose prices are " << a << " and " << b << "." << endl; 

    
}

int main()
{
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
