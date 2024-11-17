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




// code gose here
void solve(int t)
{
    // cout<<"Case "<<t<<": ";
    int n;
    cin>>n;
    int dp[2][3];
    dp[0][0]=dp[0][1]=dp[0][2]=0;
    int a,b,c;
    for (int i = 1; i <= n; i++)
    {
        cin>>a>>b>>c;
        dp[i%2][0]=a+max(dp[(i-1)%2][1],dp[(i-1)%2][2]); 
        dp[i%2][1]=b+max(dp[(i-1)%2][0],dp[(i-1)%2][2]); 
        dp[i%2][2]=c+max(dp[(i-1)%2][0],dp[(i-1)%2][1]); 

    }
    cout<<max(dp[n%2][0],max(dp[n%2][1],dp[n%2][2]));
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
