/*
REVISIT
*/

/*
Problem Statement - 
Your task is to divide the numbers 1,2,...,n into two sets of equal sum.

Input
The only input line contains an integer n.

Output
Print "YES", if the division is possible, and "NO" otherwise.
After this, if the division is possible, print an example of how to create the sets. 
First, print the number of elements in the first set followed by the elements themselves in a 
separate line, and then, print the second set in a similar way.

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
    int n;
    cin>>n;

    if(! ( (n % 4 == 0) || ((n - 3) >= 0 && (n-3)%4 == 0))){
        cout<<"NO";
    }
    else{
        vector<int> s1, s2;
        if((n % 4 == 0)){
            for(int i = 1; i <= n; i+=4){
                s1.push_back(i);
                s2.push_back(i + 1);
                s2.push_back(i + 2);
                s1.push_back(i + 3);
            }
        }
        else{
            s1.push_back(1);
            s1.push_back(2);
            s2.push_back(3);

            for(int i = 4; i <= n; i+=4){
                s1.push_back(i);
                s2.push_back(i + 1);
                s2.push_back(i + 2);
                s1.push_back(i + 3);
            }
        }

        cout<<"YES"<<endl;
        cout<<s1.size()<<endl;
        for(int i : s1)
            cout<<i<<" ";
        cout<<endl;
        cout<<s2.size()<<endl;
        for(int i : s2)
            cout<<i<<" ";
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