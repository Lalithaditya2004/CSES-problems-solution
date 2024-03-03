#include <bits/stdc++.h>
using namespace std;




int main()
{
    long long int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long long count = 1;
    for( int i = 1; i< n; i++){
        if(a[i] != a[i-1]){
            count++;
        }
    }
    
    
    printf("%ld",count);

    return 0;
}