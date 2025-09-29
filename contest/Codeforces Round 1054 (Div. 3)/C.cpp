#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        long long k;
        cin >> n >> k;

        int kc = 0;
        set<int> num; 

        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            num.insert(val);
            if (val == k) {
                kc++;
            }
        }

        int missing = 0;
        for (int i = 0; i < k; i++) {
            if (num.count(i) == 0) {
                missing++;
            }
        }

        cout << max(kc , missing)<< "\n";
    }
    return 0;
}