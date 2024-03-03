/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

long long sl = INT_MAX;

long long solve(int i,vector<long long int> v,long long int s1,long long int s2,int n){
    if(i == n){
        return abs(s1 - s2 - 0LL);
    }
    else{
        return min(solve(i + 1,v,s1 + v[i],s2,n),solve(i+1,v,s1,s2 + v[i],n));
    }
  
}


int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    vector<long long int> s(2,0);
    long long int sol = solve(0,v,0,0,n);
    cout << sol;
    return 0;
}
