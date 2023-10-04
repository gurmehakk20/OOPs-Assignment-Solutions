#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <climits>
using namespace std;

void solve() {
    string s; 
    cin >> s;
    int k; 
    cin >> k;

    int n = s.size();
    int maxi = -1;
    unordered_map<char, int> mp;
    int j = 0;

    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
        
        while (mp.size() > k) {
            mp[s[j]]--;
            if (mp[s[j]] == 0) {
                mp.erase(s[j]);
            }
            j++;
        }

        if (mp.size()==k)
        maxi = max(maxi, i - j + 1);
    }

    cout << maxi << endl;
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
