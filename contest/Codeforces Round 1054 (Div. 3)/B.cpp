#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin >>n;

        vector<int> array(n);
        for (int i = 0;i < n ;i++ )
        {
            cin >> array[i]; 
        }
        sort(array.begin(), array.end());
        int maxx =INT_MIN;
        for (int i = 0; i < n-1; i+=2)
        {
            maxx = max(maxx, abs(array[i+1] - array[i]));
        }
        cout << maxx << "\n";
    }

}