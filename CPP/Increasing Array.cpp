#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long arr[n];
    long moves = 0;
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    for(int i = 1;i<n;i++){
        if(arr[i-1] > arr[i]){
            moves += arr[i-1] - arr[i];
            arr[i] =  arr[i-1];
        }
    }
    cout << moves;
    return 0;
}