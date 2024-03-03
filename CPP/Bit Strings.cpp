#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 1;
    for(int i=0;i<n;i++){
        a = a*2;
        a = a%(1000000007);
    }
    cout << a;
   

    return 0;
}