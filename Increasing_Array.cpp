/*
Problem Statement - 
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at 
least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input
The first input line contains an integer n: the size of the array.
Then, the second line contains n integers x1,x2,...,xn: the contents of the array.

Output
Print the minimum number of moves.

Constraints
1 <= n <= 2 * 10^5
1 <= xi <= 10^9
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

    ll ans = 0;

    vector<ll> nums(n);
    for(int i = 0; i < n; i++)
        cin>>nums[i];
    
    for(int i = 1; i < n; i++){
        if(nums[i] < nums[i - 1]){
            ans += (nums[i-1] - nums[i]);
            nums[i] = nums[i-1];
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