#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int arr[n];
    int i=0;
    for(i=0; i<n; i++) cin>>arr[i];
    for(auto i: arr) cout<<i<<" ";
    return 0;
}
