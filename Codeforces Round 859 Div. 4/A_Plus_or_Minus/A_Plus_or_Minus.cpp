/*
:::author @DEANNOS at CODEFORCES
*/

//Problem Link :- https://codeforces.com/contest/1807/problem/A


#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define testcase int t; cin>>t; while(t--)

//Approach :- if sum of two numbers gives third number then return "+" else return "-"
class Solution{
public:
    string compute(int a,int b,int c)
    {
        if(a+b==c){
            return "+";
        }else {
            return "-";
        }    
    }    
};

int32_t main()
{
    fast;
    testcase
    {
        int a,b,c;
        cin>>a>>b>>c;
        Solution ob;
        cout << ob.compute(a, b, c) << endl;
    }
    return 0;
}