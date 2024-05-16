#include<bits/stdc++.h>
using namespace std;
int n,c,arr[205*205],flag=0,cnt=0;
int main(){
    cin>>n;
    while(scanf("%d",&c)!=EOF){
        while(c--)
            arr[++cnt]=flag;
        flag=!flag;
    }
    for(int i=1;i<=cnt;i++){
        cout<<arr[i];
        if(i%n==0)
            cout<<endl;
    }
    return 0;
}