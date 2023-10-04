    #include <iostream>
    #include <algorithm>
    #include <cmath>
    
    using namespace std;
    #define ll long long

    int floor(ll arr[], int target, ll n) {
        int low = 0;
        int high = n - 1;
        int mid;
        int ans = -1;

        while (low <= high) {
            mid = (high + low) / 2;

            if (target >= arr[mid]) {
                ans = mid; 
                low = mid +1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int ceil(ll arr[], int target, ll n){
        int low = 0;
        int high = n - 1;
        int mid;
        int ans = -1;

        while (low <= high) {
            mid = low + (high - low) / 2;

            if (target <= arr[mid]) {
                high = mid - 1;
                ans = mid; 
                
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int main() {
        ll n;
        cin >> n;
        ll arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int target;
        cin >> target;

        cout << ceil(arr, target, n) << " ";
        cout << floor(arr, target, n);


        return 0;
    }




