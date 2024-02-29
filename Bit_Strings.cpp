/*
Problem Statement - 
Your task is to calculate the number of bit strings of length n.
For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

Input
The only input line has an integer n.

Output
Print the result modulo 10^9+7.

Constraints
1 <= n <= 10^6
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

ll binexp(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1){
            res = (res * a)%mod;
        }
        a = (a * a)%mod;
        b >>= 1;
    }

    return res;
}

void solve(){
    int n;
    cin>>n;

    ll ans = binexp(2, n);
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