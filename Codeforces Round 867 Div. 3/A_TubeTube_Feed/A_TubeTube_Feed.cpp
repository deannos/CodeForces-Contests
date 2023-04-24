
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
const int maxN = 200001;
int fact[maxN] = {}, smallestPrimeFactor[maxN] = {}, isPrimeSieve[maxN] = {};
string yesno(bool check) { if (check) return "YES"; return "NO"; }

void solve()
{
    int m, n;
    cin >> m >> n;
    //declare array
    vector<int> vec1(m), vec2(m);
    fo(i, m)
    {
        cin >> vec1[i];

    }
    fo(i, m)
    {
        cin >> vec2[i];
    }
    int temp = -1;
    fo(i, m)
    {
        if ((vec1[i]) <= n - i)
        {
            if ( temp == -1 or vec2[i] > vec2[temp - 1])
            {
                temp = i + 1;
            }
        }
    }
    cout << temp << endl;

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