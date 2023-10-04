#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n; cin >> n;
    int *arr = new int[n];
    int mini = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mini = min (mini, arr[i]);
    }
    cout << mini;

}
