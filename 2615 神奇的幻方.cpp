#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) a[i][j]=0;
    }
    int h,l;
    h=0;
    l=n/2;
    a[h][l]=1;
    for(int i=2;i<=n*n;i++){
        if(h==0&&l!=n-1){
            h=n-1;
            l=l+1;
            a[h][l]=i;
            continue;
        }
        if(h!=0&&l==n-1){
            h=h-1;
            l=0;
            a[h][l]=i;
            continue;
        }
        if(h==0&&l==n-1){
            h=h+1;
            l=l;
            a[h][l]=i;
            continue;
        }
        if(h!=0&&l!=n-1){
            if(a[h-1][l+1]==0){
                h=h-1;
                l=l+1;
                a[h][l]=i;
            }
            else{
                h=h+1;
                l=l;
                a[h][l]=i;
            }
            continue;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}