/*
:::author @DEANNOS at CODEFORCES
*/

//Problem Link :- https://codeforces.com/contest/1807/problem/F


#include <bits/stdc++.h>
using namespace std;
#define int           long long
#define Fo(i,k,n)     for(int i=k;i<=n;i++)
#define testcase int t; cin>>t; while(t--)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
const int maxN = 200001;


void compute()
{
    int n, m;
    cin >> n >> m;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string str;
    cin >> str;
    int i = 0, j = 0;
    if (str == "DL") {
        i++, j--;
    }
    else if (str == "DR") {
        i++, j++;
    }
    else if (str == "UR") {
        i--, j++;
    }
    else {
        i--, j--;
    }
    int k = n * m;
    int cnt = 0;
    int bounces = 0;
    while (cnt <= k * 4)
    {
        cnt++;
        if (a == c && b == d) {
            cout << bounces << endl;
            goto null;
        }
        if (a + i < 1 || a + i > n || b + j < 1 || b + j > m) {
            bounces++;
        }
        if (a + i < 1 || a + i > n) {
            i *= -1;
        }
        if (b + j < 1 || b + j > m) {
            j *= -1;
        }
        a += i;
        b += j;
    }
    cout << -1 << endl;
    null:
    ;
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