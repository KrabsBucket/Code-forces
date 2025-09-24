#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        vector<int> b(k);
        int count1 = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++) {
            cin >> b[i];
            if (b[i] == 1)
                count1++;
        }

        if (count1 >= n) {
            cout << 0 << "\n";
            continue;
        }

        sort(a.begin(), a.end(), greater<long long>());
        sort(b.begin(), b.end());

        int left = 0;
        vector<long long> c;
        int i = 0;
        while(i + count1 < k)
        {
            left += b[i + count1];
            i++;
            if (n > count1 + left - 1)
                c.push_back(a[count1 + left - 1]);
            else 
                break;
        }
        long long cost = accumulate(a.begin() + count1, a.end(), 0LL) - accumulate(c.begin(), c.end(), 0LL);
        cout << cost << "\n";
    }
}