// JAI SHIV SHAMBHU !



// Problem Link :- https://codeforces.com/contest/1759/problem/G


#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;


#define int           long long
#define fo(i,n)       for(int i=0;i<n;i++)
#define reFo(i,n,k)   for(int i=n;i>=k;--i)
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
template<typename T,typename T1>T maxs(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T mins(T &a,T1 b){if(b<a)a=b;return a;}


void solve()
{
	int n;
	cin >> n;
	int cnt[n + 1] = {0};
	int pos[n + 1];
	int ans[n + 1];
	Fo(i, 1, n / 2)
    {
		int x;
		cin >> x;
		pos[x] = 2 * i - 1;
		ans[2 * i] = x;
		cnt[x]++;
	}
	Fo(i, 1, n) 
    {
		if (cnt[i] > 1) 
        {
			cout << -1 << endl;
			return;
		}
	}
 
	multiset<int, greater<int>> ms;
	reFo(i, n, 1) 
    {
		if (cnt[i]) 
        {
			ms.insert(pos[i]);
			continue;
		}
 
		if (ms.empty()) 
        {
			cout << -1 << endl;
			return;
		}
 
		auto idx = *(ms.begin());
		ans[idx] = i;
		ms.erase(idx);
	}
 
	Fo(i, 1, n) 
    {
		cout << ans[i] << ' ';
	}
	cout << endl;
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