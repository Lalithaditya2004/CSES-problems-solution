#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin >> n;
long long int sum = (n*1LL*(n+1))/2;
if(sum%2!=0){
    cout << "NO";
}
else{
    vector<int> s1;
    vector<int> s2;
    cout << "YES" << endl;
    if(n%2!=0){
    for(int i = 1;i<= (n-1)/2;i++){
            if(i%2!=0){
                s1.push_back(i);
                s1.push_back(n - i);
            }    
            else{
                s2.push_back(i);
                s2.push_back(n-i);
            }
    }
    s2.push_back(n);
    }
    else{
     for(int i = 1;i<= (n)/2;i++){
            if(i%2!=0){
                s1.push_back(i);
                s1.push_back(n - i + 1);
            }    
            else{
                s2.push_back(i);
                s2.push_back(n-i + 1);
            }
    }   
    }
    cout << s1.size() <<endl;
    for(auto i : s1){
        cout << i << " ";
    }
    cout<< endl;
    cout << s2.size() <<endl;
    for(auto i : s2){
        cout << i << " ";
    }
}

    return 0;
}
