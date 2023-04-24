
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

//int freq[26] = {0};
//int occ[26] = {0};


void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int freq[26] = {0};
    int occ[26] = {0};
    fo(i, n / 2)
    {
        if (str[i] == str[n - i - 1])
        {
            freq[str[i] - 'a']++;
        }
    }
    fo(i, n)
    {
        occ[str[i] - 'a']++;
    }
    int cnt = 0;
    int maxi = 0;
    int mini = 0;
    for (auto x : freq)
    {
        cnt += x;
        maxi = max(maxi, x);
    }

    for (auto y : occ)
    {
        mini = max(mini, y);
    }
    if (mini > n / 2 or (n % 2 != 0))
    {
        cout << "-1";
        cout << endl;
        return;
    }
    else
    {
        if (maxi > (cnt - maxi))
        {
            cout << maxi;
            cout << endl;
        }
        else
        {
            cout << (cnt / 2) + (cnt & 1);
            cout << endl;
        }

    }
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

