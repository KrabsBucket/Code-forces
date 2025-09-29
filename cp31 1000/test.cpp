#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int> arr = {4, 6, 3, 2, 0, 8, 9, 1, 7, 5};
    sort(arr.begin(), arr.end());
    cout << arr[arr.size()-2] << "\n";


    // int max1 = INT_MIN;
    // int max2 = INT_MIN;
    // for (int i =0 ; i < arr.size(); i++)
    // {
    //     if (arr[i] > max1)
    //     max1 = arr[i];

    //     else if(arr[i] < max1 and arr[i] > max2)
    //     max2 = arr[i];
    // }
    // cout << max2 << " \n";

}