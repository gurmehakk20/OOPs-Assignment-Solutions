#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    int m= n*n ;
    int arr[m];
    for (int i = 0; i < m; i++){
        cin >> arr[i];
    }
    for (int i = m-1; i >= 0; i--){
        cout << arr[i] << " ";
        if (i%n == 0) cout << endl;
    }
    return 0;
}

