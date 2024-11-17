// Dinar Perseus 2.0
#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast,unroll-loops,-ffloat-store")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace std;

// constant
const int mod = 1e9 + 7;
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void fileio(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


bool Check(string &s,int &i){
    return (s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='0');
}


// code gose here
void solve(int t)
{
    // cout<<"Case "<<t<<": ";
    ll n,w,total_sum=0;
    cin>>n>>w;
    int max_val=n*1000;
    vector<ll> dp(max_val+1,1e18);
    dp[0]=0;

    for (int i = 0; i < n; i++)
    {
        int weight, v;
        cin>>weight>>v;
        total_sum+=v;
        for (int j = max_val; j-v >= 0; j--)
        {
            dp[j]=min(dp[j],dp[j-v]+weight);
        }
        
    }

    for(int i=total_sum; i>= 0 ; i--){
        if(dp[i]<=w){
            cout<<i;
            return;
        }
    }

}



int main()
{
    fileio();
    fastio();
    // clock_t z = clock();
    int t = 1;
    //cin>>t;
    for (int i = 1; i <= t; i++)solve(i);
    // cerr<<"Run Time : "<<((double)(clock()-z)/CLOCKS_PER_SEC);
    return 0;
}
