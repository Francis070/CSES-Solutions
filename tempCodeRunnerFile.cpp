/*
Problem Statement - 
Your task is to place eight queens on a chessboard so that no two queens are attacking each other. 
As an additional challenge, each square is either free or reserved, and you can only place queens on the free squares. 
However, the reserved squares do not prevent queens from attacking each other.
 
How many possible ways are there to place the queens?
 
Input
The input has eight lines, and each of them has eight characters. Each square is either free (.) or reserved (*).
 
Output
Print one integer: the number of ways you can place the queens.
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
 
bool chk_validity(int x, int y, vector<vector<char>> &mat){
    
    //find in all the 8 direction.
    
    // top left
    int xt = x - 1, yt = y - 1;
    while(xt >= 0 && yt >= 0){
        if(mat[xt][yt] == 'Q')
            return false;
        xt--;
        yt--;
    }
    
    // top 
    xt = x - 1; yt = y;
    while(xt >= 0){
        if(mat[xt][yt] == 'Q')
            return false;
        xt--;
    }
    
    //top right
    xt = x -1; yt = y + 1;
    while(xt >= 0 && yt < 8){
        if(mat[xt][yt] == 'Q')
            return false;
        xt--;
        yt++;
    }
    
    return true;
}

 
void rec(int lev, int n, vector<vector<char>> &inp, int & ans){
    if(lev == n){
        ans++;
        return;
    }
    
    for(int i = 0; i < n; i++){
        if(chk_validity(lev, i, inp) && inp[lev][i] == '.'){
            inp[lev][i] = 'Q';
            rec(lev + 1, n, inp, ans);
            inp[lev][i] = '.';
        }
    }
}
 
void solve(){
    int n = 8;
    vector<vector<char>> inp(n, vector<char>(n));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char cur;
            cin>>cur;
            
            inp[i][j] = cur;
        }
    }
    
    int ans = 0;
    rec(0, n, inp, ans);
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
