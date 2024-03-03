#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >> t;
while(t--){
    long long int x,y;
    cin >> y >> x;
    if(y>=x){
        if(y%2 == 0){
            cout << ((y)*1LL*(y)) - x + 1 << endl; 
        }
        else{
            cout << ((y - 1)*1LL*(y - 1)) + x << endl;
        }
    }
    else{
        if(x%2 == 0){
            cout << ((x - 1)*1LL*(x - 1)) + y << endl;
        }
        else{
            cout << (x*1LL*x) - y + 1 << endl;
        }
        
    }
}

    return 0;
}