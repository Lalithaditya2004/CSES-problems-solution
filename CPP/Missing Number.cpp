#include <bits/stdc++.h>
using namespace std;



int main()
{
   long long n;
   cin >> n;
   int array[n-1];
   long long sum = 0;
   for(int i =0 ;i<n-1;i++){
       cin >> array[i];
       sum = sum + array[i];
   }
   long long original = (n*(n+1))/2;
   cout << original - sum;
    return 0;
}