#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin >> n;
for(int i = 1;i <= n ; i++){
    if(i == 1){
        cout << 0 << endl;
    }
    else if(i == 2){
        cout << 6 << endl;
    }
    else{
        long long int s = i*i;
        long long int t = (s*1LL*(s-1))/2;
        long long int at = (i-2)*(i-1)*4*1LL;
        cout << t - at << endl;
    }
}
    return 0;
}