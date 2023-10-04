#include<iostream>
using namespace std;
int main () {
	int n; cin >> n;
	int arr[n];
	int ans[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++){
		int c = 0;
		for (int j = 0; j < n; j++){
			if (arr[j] < arr[i]) c++;
		}
		ans[i] = c;
	}
	for (int i = 0; i < n; i++){
		cout << ans[i] << " ";
	}

	return 0;
}