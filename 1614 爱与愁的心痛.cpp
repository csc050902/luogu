#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int ans=1000000;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<=n-m;i++){
        int temp=0;
        for(int j=i;j<m+i;j++){
            temp+=a[j];
        }
        ans=min(temp,ans);
    }
    cout<<ans;
    return 0;
}