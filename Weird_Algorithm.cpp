/*
Problem statement - 

Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, 
and if n is odd, the algorithm multiplies it by three and adds one. 
The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:

3 10 5 16 8 4 2 1 

*/

/*
Complexities - 
n - number given as input.
Time = O(n) (time taken to silumate)
Space = O(1)
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
    cout<<n<<" ";
    while(n != 1){
        if(n & 1)   // for odd
            n = (n * 3) + 1;
        else        // for even 
            n /= 2; 
        cout<<n<<" ";
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