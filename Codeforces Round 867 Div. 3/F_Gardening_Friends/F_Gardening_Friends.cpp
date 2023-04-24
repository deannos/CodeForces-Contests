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
const int M = 1000000007;
const int maxN = 2e5 + 5;
int fact[maxN] = {}, smallestPrimeFactor[maxN] = {}, isPrimeSieve[maxN] = {};
string yesno(bool check) { if (check) return "YES"; return "NO"; }


vector <int> adj[maxN];

void dfs(int u, int p, vector <int> &dep)
{
    for (int v : adj[u])
    {
        if (v == p) 
        {
            continue;
        }
        dep[v] = dep[u] + 1;
        dfs(v, u, dep);
    }
}



int32_t main()
{
    fast;
    testcase
    {
        int n, k, c;
        cin >> n >> k >> c;
        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        vector <int> dep1(n + 1), dep2(n + 1), dep3(n + 1);
        dfs(1, 0, dep1);
        int u = 0, v = 0;
        Fo(i, 1, n)
        {
            if (dep1[i] > dep1[u])
            {
                u = i;
            }
        }
        dfs(u, 0, dep2);
        Fo(i, 1, n)
        {
            if (dep2[i] > dep2[v])
            {
                v = i;
            }
        }
        dfs(v, 0, dep3);
        int res = 0;
        Fo(i, 1, n)
        {
            res = max(res, 1LL * k * max(dep2[i], dep3[i]) - 1LL * c * dep1[i]);
        }
        cout << res << endl;
        Fo(i, 1, n) {
            adj[i].clear();
        }
    }
    return 0;
}





