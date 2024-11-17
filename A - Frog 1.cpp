// Dinar Perseus 2.0
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <utility>
#include <vector>
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
    int n;
    cin>>n;
    int h[n];
    ll a[n];
    a[0]=0;

    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
        if(i-1>=0)a[i]=a[i-1]+abs(h[i]-h[i-1]);
        if(i-2>=0)a[i]=min(a[i],a[i-2]+abs(h[i]-h[i-2]));

    }
    cout<<a[n-1];
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
