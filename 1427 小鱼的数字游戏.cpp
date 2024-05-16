#include<bits/stdc++.h>
using namespace std;
int main(){
    int c=1,a[105];
    cin>>a[c];
    while(a[c]!=0){
        c++;
        cin>>a[c];
    }
    for(int i=c;i>0;i--){
        if(a[i]!=0) cout<<a[i]<<" ";
    }
    return 0;
}