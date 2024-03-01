/*
Problem Statement - 
Given a string, your task is to generate all different strings that can be created using its characters.

Input
The only input line has a string of length n. Each character is between a–z.

Output
First print an integer k: the number of strings. Then print k lines: the strings in alphabetical order.

Constraints
1 <= n <= 8
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

void rec(string st, vector<int> cur, string inc, set<string> &res){

    // check if all the characters are included
    int val = 0, n = st.size();
    for(int i : cur)
        val += i;
    
    if(val == n){
        res.insert(inc);
        return;
    }


    for(int i = 0; i < n; i++){
        if(cur[i] == 0){
            cur[i] = 1;
            rec(st, cur, inc + st[i], res);
            cur[i] = 0;
        }
    }
}

void solve(){
    string st;
    cin>>st;

    set<string> res;
    vector<int> cur(st.size(), 0);
    rec(st, cur, "", res);

    cout<<res.size()<<endl;
    for(auto & x : res){
        cout<<x<<endl;
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