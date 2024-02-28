/*
Problem Statement - 
A number spiral is an infinite grid whose upper-left square has number 1. 
Here are the first three layers of the spiral:

1 2 9
4 3 8
5 6 7

Your task is to find out the number in row y and column x.

Input
The first input line contains an integer t: the number of tests.
After this, there are t lines, each containing integers y and x.

Output
For each test, print the number in row y and column x.
Constraints

1 <= t <= 10^5
1 <= y,x <= 10^9
*/

/*
Concept of Binary exponentiation is used for this problem as pow(a, b) will not return correct result for values
that are too large.

Complexities - 
Time - O(log(min(r, c)))
Space - O(1)
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

ull binexp(ull a, ull b){
    ull res = 1;

    while(b > 0){
        if(b & 1){
            res *= a;
        }
        a *= a;
        b >>= 1;
    }

    return res;
}

void solve(){
    ull r, c;
    cin>>r>>c;
    ull val = 0;
    if(r >= c){
        if(r & 1){
            if(r == 1)
                val = 1;
            else{
                val = binexp((r - 1), 2) + c;
            }
        }
        else{
            val = binexp(r, 2) - c + 1;
        }
    }
    else{
        if(c & 1){
            val = binexp(c, 2) - r + 1;
        }
        else{
            val = binexp(c - 1, 2) + r;
        }
    }

    cout<<val<<endl;
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