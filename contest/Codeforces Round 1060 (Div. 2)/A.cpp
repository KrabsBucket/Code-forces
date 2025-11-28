#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s; 

        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                arr.push_back(i);
        }

        if (arr.size() == 0)
        {
            cout << 0 << "\n";
            continue;
        }

        int count = 1; 

        for (int i = 1; i < arr.size(); i++)
        {
            int gap = arr[i] - arr[i-1];
            
            if (gap >= k)
            {
                count++;
            }
        }
        
        cout << count << "\n";
    }
}