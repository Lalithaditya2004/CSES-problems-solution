#include <bits/stdc++.h>
using namespace std;

vector<string> solve(int n){
    vector<string> s;
    if(n == 1){
        s.push_back("0");
        s.push_back("1");
        return s;
    }
    else{
        s = solve(n-1);
        for(int i = (int)pow(2,n-1) - 1;i >= 0;i--){
            s.push_back(s[i]);
        }
        for(int i = 0;i < s.size();i++){
            if(i<(s.size())/2){
                s[i].append("0");
            }
            else{
                s[i].append("1");
            }
        }
    }
    return s;
    
    
}


int main()
{
    int n;
    cin >> n;
    vector<string> s;
    s = solve(n);
    for(int i = 0;i<s.size();i++){
        cout << s[i] << endl;
    }
    return 0;
}