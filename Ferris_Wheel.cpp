/*
Problem Statement - 
There are n children who want to go to a Ferris wheel, and your task is to find a gondola for each child.
Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed x. You know the weight of every child.
What is the minimum number of gondolas needed for the children?

Input
The first input line contains two integers n and x: the number of children and the maximum allowed weight.
The next line contains n integers p_1,p_2,...,p_n: the weight of each child.

Output
Print one integer: the minimum number of gondolas.

Constraints
1 <= n \<= 2.10^5
1 \<= x \<= 10^9
1 \<= p_i \<= x
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
    int n, x;
    cin>>n>>x;

    vector<int> child(n);
    for(int i = 0; i < n; i++){
        cin>>child[i];
    }

    sort(begin(child), end(child));
    int ans = 0;
    int left = 0, right = n-1;
    while(left <= right){
        if(left != right){
            if(child[left] + child[right] > x){
                right --;
            }
            else{
                left++;
                right--;
            }
            ans++;
        }
        else{
            ans ++;
            left++;
            right--;
        }
    }

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