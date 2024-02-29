/*
Problem Statement - 
You have two coin piles containing a and b coins. On each move, 
you can either remove one coin from the left pile and two coins from the right pile, or two coins from the 
left pile and one coin from the right pile.
Your task is to efficiently find out if you can empty both the piles.

Input
The first input line has an integer t: the number of tests.
After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output
For each test, print "YES" if you can empty the piles and "NO" otherwise.

Constraints
1 <= t <= 10^5
0 <= a, b <= 10^9
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
    int a, b;

    cin>>a>>b;

    ll sum = a + b;
    if(sum % 3 == 0 && min(a,b) >= sum/3){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}   
    

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast
    wl
    {
        solve();
    }
    return 0;
}