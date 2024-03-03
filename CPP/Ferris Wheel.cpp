#include <bits/stdc++.h>
using namespace std;




int main()
{
    int n,x;
    cin >> n >> x;
    vector<long long int> w(n);
    for(int i = 0;i<n;i++){
        cin >> w[i];
    }
    sort(w.begin(),w.end());
    int count = 0;
    int i = 0;
    int j = n-1;
    bool yn[n] = {false};
    while(i<j){
        if(w[i] + w[j] <= x){
            count++;
            yn[i] = true;
            yn[j] = true;
            i++;
            j--;
        }
        else{
            j--;
        }
    }
    for(int i = 0 ;i<n;i++){
        if(!yn[i]){
            count++;
        }
    }
    cout << count;

    return 0;
}