#include<iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

void bruteForce(int arr[], int n){
    sort(arr, arr+n);
    int c = 1;
    int ans = -1;
    int i;
    for (i = 1; i < n; i++){
        if (arr[i] == arr[i-1]){
            c++;
        } else {
            if (c == n/3){
                ans = arr[i];
                break;
            } else {
                c = 1;
            }
        }
    }
    if (c == n/3){
        ans = arr[n-1];
    }
    cout << ans;

}

void usingExtraSpace(int arr[], int n) {

    int ans = -1;
    unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++){
        mp[arr[i]]++;
        if (mp[arr[i]] == n/3){
            ans = arr[i];
            break;
        }
    }
    cout << ans;
}

void OptimisedSolution(int arr[], int n){
    int i = 0, j = 1;
    int c = 1;
    int ans = -1;

    while (i < n && j < n){
        if (arr[i] == arr[j]){
            c++;
            if (c == n/3) {
                ans = arr[i];
                break;
            }
            
        } 
        
        if (j == n-1){
            c= 1;
            i++;
            j = i+1;
        } else j++;
    } 
    if (c == n/3) {
        ans = arr[i];
    }
    cout << ans ;
}

int main()
{
    int n; cin >> n;
    int arr[n];
    int ans = -1;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // bruteForce(arr,n);
    // usingExtraSpace(arr, n);
    OptimisedSolution(arr, n);
    
    
    return 0;
}