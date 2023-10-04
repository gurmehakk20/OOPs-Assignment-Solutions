#include<iostream>
using namespace std;

bool query(int n, int arr[]){
    int a, k; cin >> a >> k;
    int c = 0;
    for (int i = 0; i < n; i++){
        if (a % arr[i] == 0){
            c++;
        } 
    } 
    if (c >= k) return 1;
    else return 0;
    
}
int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int q; cin >> q;
    while (q--){
        if (query(n, arr)){
            cout << "Yes";
        } else {
            cout << "No";
        } 
        cout << endl;
    }


    return 0;
}