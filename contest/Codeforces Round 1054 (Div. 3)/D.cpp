#include <bits/stdc++.h> //failed

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n ;
        string s;
        cin >> s;
        vector<int> indices;
        int bcount = 1;
        int maxxx = 0;
        int initial = 0;
        int final = 0;
        int distance = 0;
        for (int i = 0; i < n ; i++)
        {
            if (s[i] == 'b')
            {   
                
                bcount ++;
                maxxx = max(maxxx, bcount);
                indices.push_back(i);
            }

            else 
                bcount = 1;

            if (bcount == maxxx)
            {
                initial = i - bcount + 1;
                final = i;
            }
        

        }   

        for (int i= 0; i<indices.size() ; i++ )
        {
            if (indices[i] < initial)
                distance += initial - indices[i];

            if (indices[i] > final)
                distance += indices[i] - final;
        }
        cout << distance<< "\n";
    }
}  