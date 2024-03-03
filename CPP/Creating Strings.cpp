#include <bits/stdc++.h>
using namespace std;
set<string> a;

void permutation(string s,int low,int high){
    
    if(low == high){
        a.insert(s);
    }
    else{
        for(int i = low;i<=high;i++){
            char t = s[low];
            s[low] = s[i];
            s[i] = t;
            permutation(s,low + 1,high);
        }
    }
    
}


int main()
{
   string s;
   cin >> s;
   permutation(s,0,s.size()-1);
   cout << a.size() << endl;
   for(auto i : a){
       cout << i << endl;
   }

    return 0;
}