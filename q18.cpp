#include<iostream>
#include <vector>
#include <climits>
#include <algorithm>

#define INT_MAX 2147483647
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int ans = 0;
    vector<int> arr2(n);
    for (int i = 0; i < n; i++){
        arr2[i] = arr[i];
    }
    sort(arr2.begin(), arr2.end());

    for (int i= 0; i < n; i++){
        if (arr[i] != arr2[i]){
            ans++;
            auto it = find(arr.begin() +i, arr.end(), arr2[i]);
            swap(arr[i], *it);
        }
    }
    cout << ans;


    return 0;
}