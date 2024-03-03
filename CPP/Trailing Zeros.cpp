#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int t = 0;
    long long d = 5;
    while( n/d != 0){
        t = t + (n/d);
        d *= 5;
    }
    cout << t;
    return 0;
}