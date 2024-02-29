/*
Problem Statement - 
Your task is to calculate the number of trailing zeros in the factorial n!.
For example, 20!=2432902008176640000 and it has 4 trailing zeros.

Input
The only input line has an integer n.

Output
Print the number of trailing zeros in n!.

Constraints
1 <= n <= 10^9
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

void solve(){
    ll n;
    cin>>n;

    vector<ll> get_zeroes;
    ll q = n/5;
    get_zeroes.push_back(q)
    for(ll i = 10; i <= n; i*= 10){
        ll k = n/i;
        get_zeroes.push_back(k);
    }
    int ans = 0;
    // reverse(begin(get_zeroes), end(get_zeroes));
    int m = get_zeroes.size();
    for(int i = m-1; i >= 0; i--){
        if(i == m-1){
            // if(i == 0)
            //     ans += (1 * get_zeroes[i]);
            // else
            ans += (max(1, i) * get_zeroes[i]);
        }   
        else{
            ans += (get_zeroes[i] - get_zeroes[i + 1]) * max(1, i);
        }
    }

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