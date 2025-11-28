#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T;
    cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n >> x;

        vector<long long> first_stack(n);
        for (int i = 0; i < n; i++)
        {
            cin >> first_stack[i];
        }
        vector<long long> second_stack(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> second_stack[i];
        }   

        vector<long long> third_stack(n);
        for (int i = 0; i < n; i++)             
        {
            cin >> third_stack[i];
        }

        if (x == 0)
        {
            cout << "YES\n";
            continue;
        }


        



    }


}