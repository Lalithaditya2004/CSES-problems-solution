#include <bits/stdc++.h>
using namespace std;




int main()
{
    long int n,m,k;
    cin >> n >> m >> k;
    vector<long long int> d(n);
    vector<long long int> a(m);
    for(int i =0 ;i<n;i++){
        cin >> d[i];
    }
    
    for(int i = 0; i<m ;i++ ){
        cin >> a[i];
    }
    long long count = 0;
    sort(a.begin(),a.end());
    sort(d.begin(),d.end());
    long long int i = 0;
    for(auto x : d){
        while(i!= m){
            if(a[i] > x + k){
                break;
            }
            else if(a[i] - k <= x && x <= a[i] + k){
                count++;
                i++;
                break;
            }
            i++;
        }
        
    }
    cout << count;
    

    return 0;
}