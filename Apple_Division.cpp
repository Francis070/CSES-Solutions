/*
Problem Statement - 
There are n apples with known weights. 
Your task is to divide the apples into two groups so that the difference between the weights of the groups is minimal.

Input
The first input line has an integer n: the number of apples.
The next line has n integers p1,p2,...,pn: the weight of each apple.

Output
Print one integer: the minimum difference between the weights of the groups.

Constraints
1 <= n <= 20
1 <= pi <= 10^9
*/

#include <bits/stdc++.h>
#define wl            ll t;cin>>t;while(t--)
#define endl          "\n"
#define ll            long long int 
#define ld            long double
#define ull           unsigned long long
#define li            long int
#define ul            unsigned long int
#define fast          std::ios::sync_with_stdio(false); cin.tie(NULL);
const ll mod = 1e9 + 7;
const ll N = 1e6 + 5;
using namespace std;

void rec(int ind, ll sum1, ll sum2, vector<ll> &wt, ll &ans){
    if(ind >= wt.size()){
        ans = min(ans, abs(sum1 - sum2));
        return;
    }

    //put into sum1
    rec(ind + 1, sum1 + wt[ind], sum2, wt, ans);
    rec(ind + 1, sum1, sum2 + wt[ind], wt, ans);
}

void solve(){
    int n;
    cin>>n;

    vector<ll> wt(n);
    for(int i = 0; i < n; i++)
        cin>>wt[i];
    
    ll ans = INT_MAX;

    rec(0, 0, 0, wt, ans);

    cout<<ans;
}   
    

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast
    solve();
    return 0;
}