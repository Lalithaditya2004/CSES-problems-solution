#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    
    unordered_map<char,int> m;
    int odd = 0;
    for(auto i : s){
        if(m.find(i) == m.end()){
            m[i] = count(s.begin(),s.end(),i);
            if(m[i]%2!=0 ){
                odd++;
                
            }
        }
    }
    if(odd > 1){
        cout << "NO SOLUTION";
    }
    else{
    int i = 0;
    for(auto it = m.begin();it != m.end();it++){
        if(it->second!=1){
            while(it->second!=0){
                if(it->second == 1){
                    s[(n-1)/2] = it->first;
                    it->second--;
                }
                else{
                s[i] = it->first;
                s[n - i - 1] = it->first;
                it->second = it->second - 2;
                i++;
                }
            }
        }
        else{
            s[(n-1)/2] = it->first;
        }

    }
    cout << s;
    }
    
    
    return 0;
}