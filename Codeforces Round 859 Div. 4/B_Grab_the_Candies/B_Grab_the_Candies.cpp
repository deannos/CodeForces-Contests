/*
:::author @DEANNOS at CODEFORCES
*/

//Problem Link :- https://codeforces.com/contest/1807/problem/B


#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fo(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define testcase int t; cin>>t; while(t--)



//Approach:- if even elements sum is greater than odd elements sum , return "YES" else "NO"
class Solution{
public:
    string compute(int n, vector<int>&vec)
    {
        int sumEven=0,sumOdd=0;
        fo(i,n){
            if (vec[i] % 2 == 0){
                sumEven += vec[i];
            }else{
                sumOdd += vec[i];
            }   
        }
        if(sumEven > sumOdd){
            return "YES";
        }else{
            return "NO";
        }
    }    
};

int32_t main()
{
    fast;
    testcase
    {
        int n;
        cin>>n;
        vector<int>vec(n);
        fo(i,n){
            cin>>vec[i];
        }
        Solution ob;
        cout << ob.compute(n, vec) << endl;
    }
    return 0;
}