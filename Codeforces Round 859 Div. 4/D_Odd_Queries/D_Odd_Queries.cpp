/*
:::author @DEANNOS at CODEFORCES
*/

//Problem Link :- https://codeforces.com/contest/1807/problem/A


#include <bits/stdc++.h>
using namespace std;
#define int           long long
#define Fo(i,k,n)     for(int i=k;i<=n;i++)
#define testcase int t; cin>>t; while(t--)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const int maxN = 200001;


int n, q;
int arr[maxN];//maximum 2e5+1

void compute()
{  
    cin >> n >> q;
    Fo(i, 1, n)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    Fo(i, 1, q){
        int l, r, k;
        cin >> l >> r >> k;
        int totalSum = arr[n] - (arr[r] - arr[l-1]) + 1ll * (r-l+1) * k;
        //total array sum is odd
        if (totalSum % 2){
            //return Yes
            cout << "YES";
            cout << endl;
        }else{
            //else return No
            cout << "NO";
            cout << endl;
        }
    }

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





