/*
Problem Statement - 
You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.

Input
The only input line contains a string of n characters.

Output
Print one integer: the length of the longest repetition.

Constraints
1 <= n <= 10^6
*/

/*
Complexities - 
n - length of string given as input.
Time = O(n) (time taken to traverse the string)
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
    string st;
    cin>>st;

    int len = st.size();

    int prev = 0;
    int ans = 1;
    for(int i = 1; i < len; i++){
        if(st[i] != st[prev]){
            ans = max(ans, i - prev);
            prev = i;
        }
    }

    ans = max(ans, len - prev);
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