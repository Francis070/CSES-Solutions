/*
Given a string, your task is to reorder its letters in such a way that it becomes a palindrome 
(i.e., it reads the same forwards and backwards).

Input
The only input line has a string of length n consisting of characters A–Z.

Output
Print a palindrome consisting of the characters of the original string. You may print any valid solution. 
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
    string ip;
    cin>>ip;
    unordered_map<char, int> freq;
    for(char c : ip)
        freq[c]++;
    
    int odd = 0;
    int k = -1;
    char oc;
    for(auto &x : freq){
        if(x.second % 2 == 1){
            odd++;
            k = x.second;
            oc = x.first;
            x.second -= 1;
        }
    }
    string res = "";
    int m = ip.size();
    vector<char> st(m);
    if(odd > 1)
        cout<<"NO SOLUTION";
    else{
        if(odd == 1){
            st[m/2] = oc;
        }
        int cur = (m + 1)/2;
        for(auto &x : freq){
            int cnt = x.second;
            
            for(int i = 0; i < cnt/2; i++){
                st[cur] = x.first;
                st[m - cur - 1] = x.first;
                cur++;
            }
        }
        for(char c : st)
            res += c;
        cout<<res;
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