#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++){
        int e; cin >> e;
        nums.push_back(e);
    }

    vector<int> temp(n);
    for (int i=0; i<n; i++){
        temp[(i+k)%n]=nums[i];
    }
    nums=temp;
    for (int i= 0; i < n; i++){
        cout << nums[i] << " ";
    }

}
