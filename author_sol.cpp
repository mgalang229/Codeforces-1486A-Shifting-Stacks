#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool checker = true;
		// create 'sum' variable to calculate the current total height
		long long sum = 0;
		// create 'need' variable to find the height value needed for 
		// the i-th block (e.g., 0, 1, 2, 3, 4, ..., n - 1)
		long long need = 0;
		for (int i = 0; i < n; i++) {
			// add 'i' to 'need'
			need += i;
			// add the current height to 'sum'
			sum += a[i];
			if (sum < need) {
				// check if 'sum' can accommodate 'need' height of the i-th block
				checker = false;
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
