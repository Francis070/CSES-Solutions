/*
Problem Statement - 
There are n concert tickets available, each with a certain price. Then, m customers arrive, one after another.
Each customer announces the maximum price they are willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.

Input
The first input line contains integers n and m: the number of tickets and the number of customers.
The next line contains n integers h_1,h_2,...,h_n: the price of each ticket.
The last line contains m integers t_1,t_2,...,t_m: the maximum price for each customer in the order they arrive.

Output
Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.
If a customer cannot get any ticket, print -1.

Constraints
1 <= n, m <= 2.10^5
1 <= h_i, t_i <= 10^9
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
    int n, m;
    cin>>n>>m;

    vector<ll> ticket(n), cust(m), ans(m);
    map<ll,  int> mp;
    for(int i = 0; i < n; i++){
        cin>>ticket[i];
        mp[ticket[i]]++;
    }
    for(int i = 0; i < m; i++){
        cin>>cust[i];

        auto pos = mp.upper_bound(cust[i]);
        if((pos == mp.end() && mp.size() == 0) || (pos == mp.begin())){
            ans[i] = -1;
            continue;
        }

        pos = prev(pos);

        ans[i] = pos->first;
        pos->second -= 1;
        if(pos->second == 0)    
            mp.erase(pos);
    }

    for(int i : ans)
        cout<<i<<" ";
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