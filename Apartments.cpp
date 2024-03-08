/*
Problem Statement - 
There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.
Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.

Input
The first input line has three integers n, m, and k: the number of applicants, the number of apartments, and the maximum allowed difference.
The next line contains n integers a_1, a_2,..., a_n: the desired apartment size of each applicant. If the desired size of an applicant is x, he or she will accept any apartment whose size is between x-k and x+k.
The last line contains m integers b_1, b_2,..., b_m: the size of each apartment.

Output
Print one integer: the number of applicants who will get an apartment.

Constraints
1 <= n, m <= 2.10^5
0 <= k <= 10^9
1 <= a_i, b_i <= 10^9
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
    int n, m, k;

    cin>>n>>m>>k;

    vector<ll> desire(n);
    for(int i =0; i < n; i++){
        ll x; cin>>x;
        desire[i] = x;
    }
    map<ll, int> apart;
    for(int i =0; i < m; i++){
        ll x;
        cin>>x;
        apart[x]++;
    }
    sort(begin(desire), end(desire));
    ll ans = 0;
    for(ll i : desire){
        int lw = i - k;
        int hi = i + k;
        auto pl = apart.lower_bound(lw);
        if(pl != apart.end() && pl->first >= lw && pl->first <= hi){
            ans++;
            pl->second --;
            if(pl->second <= 0)
                apart.erase(pl);
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