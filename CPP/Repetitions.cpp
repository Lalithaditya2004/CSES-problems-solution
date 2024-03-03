#include <bits/stdc++.h>
using namespace std;



int main()
{
   string n;
   cin >> n;
   int l = 0;
   int count = 0;
   int sol = 1;
   for(int r = 0;r < n.size();r++){
       if(n[l] == n[r]){
           count++;
       }
       else{
           l = r;
           sol = max(sol,count);
           count = 1;
           
       }
   }
   sol = max(sol,count);
   cout << sol ;
  
    return 0;
}