/*
:::author @DEANNOS at CODEFORCES
*/

//Problem Link :- https://codeforces.com/contest/1807/problem/G2


#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fo(i,n)       for(int i=0;i<n;i++)
#define Fo(i,k,n)     for(int i=k;i<n;i++)
#define testcase int t; cin>>t; while(t--)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const int maxN = 200001;
string yesno(bool check) { if (check) return "YES"; return "NO"; }


int n;
int arr[maxN];

void compute()
{
    cin >> n;
    vector<int> v(n);
    fo(i,n){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    if (v[0] != 1) {
        cout << "NO";
        cout << endl;
        return;
    }
    int curr = 1;
    Fo(i, 1, n) {
        if (curr < v[i]) {
            cout << "NO";
            cout << endl;
            return;
        }
        curr += v[i];
    }
    cout << "YES";
    cout << endl;
}  


int32_t main()
{
    fast;
    testcase{
        compute();
    }
    return 0;
}