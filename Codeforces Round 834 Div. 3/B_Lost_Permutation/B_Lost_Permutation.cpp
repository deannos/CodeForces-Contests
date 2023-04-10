// JAI SHIV SHAMBHU !


// Problem Link :- https://codeforces.com/contest/1759/problem/B
#include <bits/stdc++.h>
using namespace std;


#define int           long long
#define fo(i,n)       for(int i=0;i<n;i++)
#define reFo(i,k,n)   for(int i=n;i>=k;--i)
#define Fo(i,k,n)     for(int i=k;i<n;i++)
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
#define yes  cout << "YES" << endl;
#define no   cout << "NO" << endl;
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define ins insert
#define precision(a) cout<<fixed<<setprecision(a)
#define testcase int t; cin>>t; while(t--)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define timetaken cerr<<fixed<<setprecision(10); cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl
const int M = 1000000007;
const int maxN = 100;
int fact[maxN] = {}, smallestPrimeFactor[maxN] = {}, isPrimeSieve[maxN] = {};
string yesno(bool check) { if (check) return "YES"; return "NO"; }
template<typename T,typename T1>T maxF(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T minF(T &a,T1 b){if(b<a)a=b;return a;}



int solve()
{
    int m, s;
    cin >> m >> s;
    vector<int> vec(51);
    int mx = 0;
    fo(i, m)
    {
        int temp;
        cin >> temp;
        vec[temp] = 1;
        maxF(mx, temp);
    }
    for (int i = 1; i <= mx; i++)
    {
        if (!vec[i])
        {
            s -= i;
        }
    }
    for (int i = mx + 1; i <= 1000; i++)
    {
        if (s == 0)
        {
            yes
            return 0;
        }
        s -= i;
    }
    no
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