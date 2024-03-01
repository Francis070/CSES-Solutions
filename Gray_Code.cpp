/*
Problem Statement - 
A Gray code is a list of all 2^n bit strings of length n, 
where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).
Your task is to create a Gray code for a given length n.

Input
The only input line has an integer n.

Output
Print 2^n lines that describe the Gray code. You can print any valid solution.

Constraints
1 <= n <= 16
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

    int m = pow(2, n);
    
    vector<vector<int>> res(m, vector<int>(n, 0));

    int init = 1, sec = 2;

    for(int i = 0; i < n; i++){
        int chk = 1;
        for(int j = init; j < m ; j+=sec){
            for(int k = j; k < min(m, j + sec); k++){
                res[k][i] = chk;
            }
            chk = (chk + 1)%2;
        }
        init *= 2;
        sec *= 2;
    }

    for(int i = 0; i < m; i++){
        reverse(begin(res[i]), end(res[i]));
        for(int j : res[i])
            cout<<j;
        cout<<endl;
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