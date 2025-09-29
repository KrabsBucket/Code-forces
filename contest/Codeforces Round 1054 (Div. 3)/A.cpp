#include <bits/stdc++.h>
using namespace std;

int main (){
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin >>n;
        int count_zero = 0;
        int count_one = 0;

        vector<int> array(n);
        for (int i = 0;i < n ;i++ )
        {
            cin >> array[i]; 

            if ( array[i] == 0)
                count_zero++;

            if ( array[i] == -1)
                count_one++;
        }

        int total = count_zero + 2*(count_one%2);
        cout << total << "\n";
    }
    

}