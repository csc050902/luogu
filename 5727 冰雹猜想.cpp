#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0;
    cin>>n;
    int a[10000];
    a[i]=n;
    while(n!=1){
        i++;
        if(n%2==0) n/=2;
        else n=(n*3)+1;
        a[i]=n;
    }
    for(i;i>=0;i--) cout<<a[i]<<" ";
    return 0;
}