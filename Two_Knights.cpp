/*
Problem Statement - 
Your task is to count for k=1,2,...,n the number of ways two knights can be placed on a k x k 
chessboard so that they do not attack each other.

Input
The only input line contains an integer n.

Output
Print n integers: the results.

Constraints
1 <= n <= 10000
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

ll fact2(ll num){              
    ll res = (num * (num-1))/2;
    return res;
}

void solve(){
    int n;
    cin>>n;

    vector<ll> v (n, 0);
    int cur = 1, inc = 1;
    for(ll i =0; i < n; i++){
        if(i >= 2){
            v[i] = 8 * cur;
            cur += inc;
            cur++;
            inc++;
        }
    }

    for(ll i = 1; i < n; i++){
        ll er = i + 1;

        ll val = fact2(er * er);    // calculating the fact as Nc2 can be the total number of ways we can arrange knights
        v[i] = val - v[i];          // subtracting the ways that the knights can attack.
    }

    for(int i = 0; i < n; i++){
        cout<<v[i]<<endl;
    }
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