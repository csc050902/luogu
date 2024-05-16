#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int k=0;k<n;k++){
        int f=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==a[k]){
                    ans++;
                    f=1;
                    break;
                }
            }
            if(f==1) break;
        }
    }
    cout<<ans;
    return 0;
}