// JAI SHIV SHAMBHU !


//Problem Link:- https://codeforces.com/contest/1759/problem/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define precision(a) cout<<fixed<<setprecision(a)
#define testcase int t; cin>>t; while(t--)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define timetaken cerr<<fixed<<setprecision(10); cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl


int solve()
{
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return 0;
    }
    if (abs(a - b) >= x)
    {
        cout << 1 << endl;
        return 0;
    }
    if (abs(a - r) >= x && abs(r - b) >= x)
    {
        cout << 2 << endl;
        return 0;
    }
    if (abs(a - l) >= x && abs(l - b) >= x)
    {
        cout << 2 << endl;
        return 0;
    }
    if (abs(a - r) >= x && abs(l - r) >= x && abs(l - b) >= x)
    {
        cout << 3 << endl;
        return 0;
    }
    swap(l, r);
    if (abs(a - r) >= x && abs(l - r) >= x && abs(l - b) >= x)
    {
        cout << 3 << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}


int32_t main()
{
    fast;
    testcase
    {
        solve();
    }
    return 0;
}