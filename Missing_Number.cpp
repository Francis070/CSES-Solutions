/*
Problem statement - 
You are given all numbers between 1,2,....,n except one. Your task is to find the missing number.

Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).

Output
Print the missing number.
*/

/*
Complexities - 
n - number given as input.
Time = O(n)
Space = O(n)
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

    vector<ll> nums(n-1);
    
    ll input_xor = 0;

    // taking input of all the numbers
    for(int i = 0; i < n-1; i++){
        cin>>nums[i];
        input_xor ^= nums[i];
    }

    for(int i = 1; i <= n; i++){
        input_xor ^= i;
    }

    cout<<input_xor;

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