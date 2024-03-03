/*
Problem Statement - 
Consider an infinite string that consists of all positive integers in increasing order:
12345678910111213141516171819202122232425...
 
Your task is to process q queries of the form: what is the digit at position k in the string?
 
Input
The first input line has an integer q: the number of queries.
After this, there are q lines that describe the queries. Each line has an integer k: a 1-indexed position in the string.
 
Output
For each query, print the corresponding digit.
 
Constraints
1 <= q <= 1000
1 <= k <= 10^18
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
    ull k;
    cin>>k;
    
    ull ncnt = 1, ccnt = 1, clow = 1, chigh = 9, nlow = 1, nhigh = 9;
    while(k > chigh){
        ccnt++;
        ncnt *= 10;
        nlow = ncnt;
        nhigh = nhigh + 9*(ncnt) ;
        clow = chigh + 1;
        chigh = (clow + (nhigh - nlow + 1) * ccnt) - 1;
    }
    
    ull rem = (k - clow)/ccnt;
    ull md = (k - clow)%ccnt;
    ull num = nlow + rem;
        
    string curs = to_string(num);
    char cur = curs[md];
    
    int res = int(cur - '0');
    cout<<res<<endl;
}   
    
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast
    wl{
        solve();
    }
    return 0;
}