#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin >> n;
  if(n == 1){
      cout<< "1";
  }
 else if(n<4){
     cout << "NO SOLUTION";
 }
 else if(n == 4){
     cout << "3 1 4 2";
 }
 else{
     int a,s;
     if(n%2!=0){
     s = n/2;
     a = s + 1;
     }
     else{
        s = (n-1)/2;
        a = s + 1;
     }
     int p = 1;
     cout << "1 ";
     for(int i = 1;i<n;i++){
         if(i%2!=0){
             p = p + a;
         }
         else{
             p = p - s;
         }
         cout << p << " ";
     }
 }

    return 0;
}