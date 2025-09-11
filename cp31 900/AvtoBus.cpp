#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int min_t = -1;
        int max_t = -1;
        if (n % 4 == 0)
            min_t = n / 4;

        if (n % 6 == 0)
            max_t = n / 6;
        
        if (n % 2 != 0 || n < 4)
            cout << -1 << endl;
        else
            cout << min_t << " " << max_t << endl;
        



    }



}