

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


int arr[maxN];
int freq[maxN];

void solve()
{
    int n;
    cin >> n;
    vector<int> vec;
    int ans = 0;
    Fo(i, 1, n)
    {
        cin >> arr[i];
        vec.pb(arr[i]);
    }
    srt(vec);
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    Fo(i, 1, n)
    {
        arr[i] = lower_bound(vec.begin(), vec.end(), arr[i]) - vec.begin();
        freq[arr[i]]++;
    }
    Fo(i, 1, n)
    {
        freq[arr[i]]--;
        int val = vec[arr[i]];
        vector<int> cnt;
        Fo(j, 1, val)
        {
            if (j * j * j > val)
            {
                break;
            }
            if (val % (j * j) == 0)
            {
                cnt.pb(j);
            }
            if (val % j == 0)
            {
                int x = sqrt(val / j);
                if (x * x * j == val)
                {
                    cnt.pb(x);
                }
            }
        }
        srt(cnt);
        cnt.erase(unique(cnt.begin(), cnt.end()), cnt.end());
        for (auto c : cnt)
        {
            int l = lower_bound(vec.begin(), vec.end(), val / c) - vec.begin();
            int r = lower_bound(vec.begin(), vec.end(), val / (c * c)) - vec.begin();
            if (l >= vec.size() or r >= vec.size())
            {
                continue;
            }
            if (vec[l] != val / c or vec[r] != val / (c * c))
            {
                continue;
            }
            if (c == 1)
            {
                ans = ans + freq[l] * (freq[r] - 1);
            }
            else
            {
                ans = ans + freq[l] * freq[r];
            }
        }
        freq[arr[i]]++;
    }
    cout << ans << endl;
    Fo(i, 1, n)
    {
        freq[arr[i]] = 0;
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





