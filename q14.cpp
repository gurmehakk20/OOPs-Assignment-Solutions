#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int e; cin >> e;
        arr.push_back(e);
    }
    vector<int> ans;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (arr[i] < arr[j]) {
                break;
            } if (j == n-1){
                ans.push_back(arr[i]);
            }    
        }
    }

    ans.push_back(arr[n-1]);

    sort(ans.begin(), ans.end());
    for (int i= 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }


    return 0;
}