#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        bool flag = false;
        int max_index = 0;
        vector<int> per(n);
        for (int i =0; i <n ; i++)
            {cin>> per[i];
                if (per[i]== n)
                    max_index = i;
            }

        for (int i = 0; i <max_index; i++)
            if (per[i+1] - per[i] < 0)
                {
                    flag = true;
                    break;
                }

        for (int i = max_index; i <n-1; i++)
            if (per[i+1] - per[i] > 0)
                {
                    flag = true;
                    break;
                }

        if (flag)
            cout << "NO" << "\n";

        else 
            cout << "YES" << "\n";

    }
}
      