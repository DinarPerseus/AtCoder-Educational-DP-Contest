// Dinar Perseus 2.0
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize ("Ofast,unroll-loops,-ffloat-store")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#define ll long long int
#define all(x) x.begin(), x.end()
using namespace __gnu_pbds;
using namespace std;
template<class T> using  oset= tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

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




// code gose here
void solve(int t)
{
    // cout<<"Case "<<t<<": ";
    int n,k;
    cin>>n>>k;
    int h[n];
    vector<ll> dp(n,1e9);
    dp[0]=0;

    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
        for (int j = 1; j <= k && i-j>=0; j++){
            dp[i]=min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
        }   

    }
    cout<<dp[n-1];
}



int main()
{
    fileio();
    fastio();
    // clock_t z = clock();
    int t = 1;
    // cin>>t;
    for (int i = 1; i <= t; i++)solve(i);
    // cerr<<"Run Time : "<<((double)(clock()-z)/CLOCKS_PER_SEC);
    return 0;
}
