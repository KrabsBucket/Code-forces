// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<utility>
#include<vector>
using namespace std;
bool isPalindrome(string s)
    {
        int st=0,en = s.length()-1;
        while(st<en)
        {
            if(s[st++] != s[en--])
                return false;
        }
        return true;
    }
int main() {
    string s;
    string s1;
    int q;
    cin>>s;
    cin>>q;
    vector<int> ans(q);
    vector<pair<int,int>> vec(q);
    vector<string> vecs(q);
     for(int i=0; i<q; i++)
     {
         cin>>vec[i].first;
         cin>>vec[i].second;
     }

    for (int i = 0; i < q ; i++)
    {
        int m = vec[i].second - vec[i].first +1;
        s1 = s.substr(vec[i].first-1 , m);
        
   
        for(int j=0;j<m;j++)
        {
            for(int k = m-1; k>=j; k--)
            {
                string s2 = s1.substr(j, k-j+1);
                if(isPalindrome(s2))
                    ans[i]++;
            }
        }
    }
    
    for(int i=0; i<q;i++)
    {
        cout<<endl;
        cout<<ans[i];
    }
    return 0;
}