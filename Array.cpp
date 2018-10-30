#include <bits/stdc++.h>
#define ll long long int
#define f(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;

int main(){
    ll n; 
    cin>>n;
    ll a[n];
    f(i,0,n-1) cin>>a[i];
    f(i,0,n-1) cout<<a[i]<<" ";
    return 0;
}
