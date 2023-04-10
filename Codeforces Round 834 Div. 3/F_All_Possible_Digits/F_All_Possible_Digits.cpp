// JAI SHIV SHAMBHU !


// Problem Link :- https://codeforces.com/contest/1759/problem/F
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
const int maxN = 109;
int fact[maxN] = {}, smallestPrimeFactor[maxN] = {}, isPrimeSieve[maxN] = {}, arr[maxN];
string yesno(bool check) { if (check) return "YES"; return "NO"; }



int32_t main()
{
    fast;
    testcase
    {
        int n, p;
        map<int, bool>vis;
        cin >> n >> p;
        fo(i, n)
        {
            cin >> arr[i];
            vis[arr[i]] = 1;
        }
        int l = arr[n - 1], r = (arr[n - 1] + p - 1) % p;
        while (r != l)
        {
            if (vis[r])
            {
                r = (r + p - 1) % p;
            }
            else
            {
                break;
            }
        }
        int ans = (r - l + p) % p;
        int res = p - arr[n - 1];
        for (int i = n - 2; i >= -1; i--)
        {
            if (i == -1)
            {
                vis[1] = true;
                break;
            }
            arr[i]++;
            if (arr[i] < p)
            {
                vis[arr[i]] = 1;
                break;
            }
            arr[i] = 0;
            vis[0] = 1;
        }
        l = arr[n - 1], r = (arr[n - 1] + p - 1) % p;
        while (r != l)
        {
            if (vis[r])
            {
                r = (r + p - 1) % p;
            }
            else
            {
                break;
            }
        }
        res = max(res, (r - l + p) % p);
        ans = min(ans, res);
        cout << ans << endl;
    }
    return 0;
}
