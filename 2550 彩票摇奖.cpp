#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
    int n,count=0;
    cin>>n;
    int b[7];
    for(int i=0;i<7;i++) cin>>b[i];
    int x;
    while(n--){
        for(int i=0;i<7;i++){
            cin>>x;
            for(int j=0;j<7;j++){
                if(x==b[j]) count++;
            }
        }
        a[count]++;
        count=0;
    }
    for(int i=7;i>=1;i--) cout<<a[i]<<" ";
    return 0;
}