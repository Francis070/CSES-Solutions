/*
Problem Statement -
A permutation of integers 1,2,...,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.

Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,...,n. If there are several solutions, you may print any of them. 
If there are no solutions, print "NO SOLUTION".

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

void solve(){
    ll n;
    cin>>n;

    if(n < 4){
        if(n == 1)
            cout<<1;
        else{
            cout<<"NO SOLUTION";
        }
        return;
    }
    
    ll odd_source = (n & 1) ? n : (n-1);
    ll even_source = (n & 1) ? (n-1) : n;

    // all the odd elements
    while(odd_source >= 1){
        cout<<odd_source<<" ";
        odd_source -= 2;
    }

    while(even_source >= 2){
        cout<<even_source<<" ";
        even_source -= 2;
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