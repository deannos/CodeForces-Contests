/*
:::author @DEANNOS at CODEFORCES
*/

//Problem Link :- https://codeforces.com/contest/1807/problem/C


#include <bits/stdc++.h>
using namespace std;
#define int           long long
#define fo(i,n)       for(int i=0;i<n;i++)
#define Fo(i,k,n)     for(int i=k;i<n;i++)
#define testcase int t; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const int maxN = 200001;


int n;
string str;


void compute()
{
    cin>>n;
    cin>>str;
    map<char, int> set;
    fo(idx, n) {
        if (set.find(str[idx]) == set.end()) {
            set[str[idx]] = idx;
        }
        else {
            int cntAbsolute = idx - set[str[idx]];
            if (cntAbsolute % 2 == 1)
            {
                cout << "NO";
                cout << endl;
                return;
            }
            set[str[idx]] = idx;
        }
    }
    cout << "YES";
    cout << endl;
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



