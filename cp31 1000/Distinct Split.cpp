#include <bits/stdc++.h>
using namespace std;

int fx(string s, int t)
{
    if (t <= 0 || t >= s.size()) {
        return 0;
    }
    int summ = 0;
    string a = s.substr(0, t);
    string b = s.substr(t, s.size() - t);
    set<char> count1;
    set<char> count2;
    for (char c : a) {
        count1.insert(c);
    }
    for (char c : b) {
        count2.insert(c);
    }
    summ = count1.size() + count2.size();
    return summ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (s.size() == 2) {
            cout << 2 << "\n";
            continue;
        }

        int start = 1;
        int end = n - 1;

        // This loop now intelligently finds a peak
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            
            // By only comparing mid and mid+1, we can decide
            // which half MUST contain a peak.
            if (fx(s, mid) < fx(s, mid + 1)) {
                // We're on an upward slope, so the peak must be to the right.
                start = mid + 1;
            } else {
                // We're on a downward slope or a peak, so the peak
                // is either at 'mid' or to its left.
                end = mid;
            }
        }

        // The loop finishes when start == end, which is the peak index.
        cout << fx(s, start) << "\n";
    }
    return 0;
}