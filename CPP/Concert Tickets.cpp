#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin >> n >> m;
   bool r[n] = {false};
   vector<long long int> t(n);
   long long int c[m];
   for(int i = 0 ;i<n ;i++){
       cin >> t[i];
   }
   for(int i = 0 ;i<m ;i++){
       cin >> c[i];
   }
   sort(t.begin(),t.end());
   vector<long long int> sol(m,-1);
   
   for(int j = 0;j<m;j++){
       int min = -1;
       for(int i = 0;i<n;i++){
           if(r[i]){
               continue;
           }
           if( t[i] < c[j] ){
               if(min!= -1){
                   r[min] = false ;
               }
               min = i;
               sol[j] = t[min]; 
               r[min] = true;
               
           }
           else if(t[i] == c[j]){
               if(min!= -1){
                   r[min] = false ;
               }
               sol[j] = t[i];
               r[i] = true;
               break;
           }
           else{
               break;
           }
       }
   }
   for(auto i : sol){
       cout << i << " ";
   }

    return 0;
}
