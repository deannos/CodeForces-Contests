/*
:
:
:::author @DEANNOS at CODEFORCES
:
:
*/

#include <bits/stdc++.h>
using namespace std;
#define int           long long
#define fo(i,n)       for(int i=0;i<n;i++)
#define reFo(i,k,n)   for(int i=n;i>=k;--i)
#define Fo(i,k,n)     for(int i=k;i<=n;i++)
#define f1(i,k,n)     for(int i=k;i<=n;i+=2)
#define vi            vector<int>
#define vvi           vector<vector<int>>
#define pii           pair<int, int>
#define vpii          vector<pii>
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define srt(x) sort(all(x))
#define rev(x) reverse(all(x))
#define scanit(a,n) for(int indexaa=0; indexaa<n; indexaa++) cin>>a[indexaa];
#define printarr(a,n) for(int indexaa=0; indexaa<n; indexaa++) cout<<a[indexaa]<<" "; cout<<endl;
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define ins insert
#define precision(a) cout<<fixed<<setprecision(a)
#define testcase int t; cin>>t; while(t--)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define timetaken cerr<<fixed<<setprecision(10); cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl
using namespace std;
const int M = 1000000000;
const int maxN = 2e5 + 5;
int fact[maxN] = {}, smallestPrimeFactor[maxN] = {}, isPrimeSieve[maxN] = {};
string yesno(bool check) { if (check) return "YES"; return "NO"; }


void solve()
{
    int n;
    cin >> n;
    unordered_map< int , int> unmap;
    map<int, int> mp;
    vector<int> vec(n);
    int ans = 0;
    fo(i, n)
    {
        cin >> vec[i];
    }
    srt(vec);
    reverse(vec.begin(), vec.end());
    fo(i, n)
    {
        mp[vec[i]]++;
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        auto iter = *it;
        for (int j = 2; j <= 1000; j++)
        {
            if (j * iter.ff > 1e6)
            {
                break;
            }
            if (mp.find(iter.ff * j) != mp.end())
            {
                unmap[iter.ff * M + j] += mp[iter.ff * j] * iter.ss;
                if (unmap.find(iter.ff * j * M + j) != unmap.end())
                {
                    ans += unmap[iter.ff * j * M + j] * iter.ss;
                }
            }
        }
    }
    for (auto m : mp)
    {
        ans += m.ss * (m.ss - 1) * (m.ss - 2);
    }
    cout << ans << endl;
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





