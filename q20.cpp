#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int e; cin >> e;
        arr.push_back(e);
    }

    int sumS = 0, sumD = 0;
    int low = 0, high = n-1;
    while (low <= high){
        if (low <= high){
            if (arr[low] > arr[high]){
            sumS += arr[low];
            low++;
            } else {
                sumS += arr[high];
                high--;
            }
        }
        if (low <= high){
            if (arr[low] > arr[high] && low <= high){
                sumD += arr[low];
                low++;
            } else {
                sumD += arr[high];
                high--;
            }
        } 
    }
     cout << sumS << " " << sumD;

    return 0;
}