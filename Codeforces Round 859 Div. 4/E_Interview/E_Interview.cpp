/*
:::author @DEANNOS at CODEFORCES
*/

//Problem Link :- https://codeforces.com/contest/1807/problem/E


#include <bits/stdc++.h>
using namespace std;
#define int           long long
#define fo(i, n)      for(int i=0;i<n;i++)
#define Fo(i,k,n)     for(int i=k;i<=n;i++)
#define testcase      int t; cin>>t; while(t--)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const int maxN = 200001;



void compute()
{
    int n;
    cin >> n;
    int arr[n + 1];

    Fo(i,1,n) {
      cin >> arr[i];
      arr[i] += arr[i - 1];
    }

    int start = 1, end = n;
    while (start != end) {
        int mid = (start + end) / 2;
        int cnt = mid - start + 1;
        cout << "? " << cnt;
        
        Fo(i,start,mid){
            cout << " " << i;
        }  
        cout << endl;
        cout.flush();

        int m;
        cin >> m;
        if (m == arr[mid] - arr[start - 1]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    cout << "! " << start;
    cout << endl;
    cout.flush();

}


int32_t main()
{
    fast;
    testcase
    {
        compute();
    }
    return 0;
}