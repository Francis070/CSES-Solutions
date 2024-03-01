/*
Problem Statment - 
The Tower of Hanoi game consists of three stacks (left, middle and right) and n round disks of different sizes. 
Initially, the left stack has all the disks, in increasing order of size from top to bottom. 
The goal is to move all the disks to the right stack using the middle stack. 
On each move you can move the uppermost disk from a stack to another stack. In addition, it is not allowed to place a larger disk on a smaller disk.
Your task is to find a solution that minimizes the number of moves.

Input
The only input line has an integer n: the number of disks.

Output
First print an integer k: the minimum number of moves.
After this, print k lines that describe the moves. Each line has two integers a and b: you move a disk from stack a to stack b.

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

void tower_of_hanoi(int n, int from , int to , int aux){
    if(n == 0)
        return;
    
    tower_of_hanoi(n-1, from, aux, to);
    cout<<from<<" "<<to<<endl;
    tower_of_hanoi(n - 1, aux, to, from);
}

void solve(){
    int n;
    cin>>n;
    int from = 1, to = 3, aux = 2;
    cout<<(pow(2, n) - 1)<<endl;
    tower_of_hanoi(n, from, to, aux);
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