/*
Problem Statement - 
There are 88418 paths in a 7 x 7 grid from the upper-left square to the lower-left square. 
Each path corresponds to a 48-character description consisting of characters D (down), U (up), L (left) and R (right).
For example, the path
 
// image of the path is there in the question, refer https://cses.fi/problemset/task/1625 for it.
 
corresponds to the description DRURRRRRDDDLUULDDDLDRRURDDLLLLLURULURRUULDLLDDDD.
You are given a description of a path which may also contain characters ? (any direction). 
Your task is to calculate the number of paths that match the description.
 
Input
The only input line has a 48-character string of characters ?, D, U, L and R.
 
Output
Print one integer: the total number of paths.
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
 
vector<pair<int, int>> dirs = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
 
void get_all_paths(int ind, int x, int y, int cnt, int & paths, string & s, vector<vector<int>> & vis){
    int n = 7;
    int m = 48;
    // checking for slice for reference https://usaco.guide/problems/cses-1625-grid-paths/solution#optimization-1
    if(vis[x][y + 1] && vis[x][y - 1] && !vis[x-1][y] && !vis[x + 1][y])
        return;
    if(!vis[x][y + 1] && !vis[x][y - 1] && vis[x-1][y] && vis[x + 1][y])
        return;

    if(x == 7 && y == 1){
        if(cnt == m)
            paths++;
        return;
    }

    if(ind >= m)
        return;
    
    // dfs on the rest of the cells
    vis[x][y] = 1;

    if(s[ind] == '?'){
        for(int i = 0; i< 4; i++){
            int a = x + dirs[i].first, b = y + dirs[i].second;

            if(!vis[a][b])
                get_all_paths(ind + 1, a, b, cnt + 1, paths, s, vis);
        }
    }
    else{
        int a = x, b = y;
        if(s[ind] == 'U'){
            a -= 1;
        }
        else if(s[ind] == 'R'){
            b += 1;
        }
        else if(s[ind] == 'D'){
            a += 1;
        }
        else{
            b -= 1;
        }
        if(!vis[a][b])
        get_all_paths(ind + 1, a, b, cnt + 1, paths, s, vis);
    }

    vis[x][y] = 0;
}

void solve(){
    string s;
    cin>>s;
    int n = 7;
    int m = 9;
    vector<vector<int>> vis(m, vector<int>(m, 0));

    for(int i =0; i < 9; i++){
        vis[0][i] = 1;
        vis[i][0] = 1;
        vis[8][i] = 1;
        vis[i][8] = 1;
    }

    int paths = 0;
    get_all_paths(0, 1, 1, 0, paths, s, vis);

    cout<<paths;
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