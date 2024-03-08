/*
Problem Statement - 
You are given a list of n integers, and your task is to calculate the number of distinct values in the list.

Input
The first input line has an integer n: the number of values.
The second line has n integers x_1,x_2,...,x_n.

Output
Print one integers: the number of distinct values.

Constraints
1 <= n <= 2.10^5
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
    int n;
    cin>>n;

    vector<ll> v(n);
    for(int i =0; i < n; i++){
        ll x; cin>>x;
        v[i] = x;
    }
    sort(begin(v), end(v));
    int cnt = 0;
    for(int i =1; i< n; i++){
        if(v[i] != v[i-1])
            cnt++;
    }
    cnt++;

    cout<<cnt;
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