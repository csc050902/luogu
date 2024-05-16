#include<bits/stdc++.h>
using namespace std;
int m[25][25][25];
int main(){
    int w,x,h;
    cin>>w>>x>>h;
    int q;
    cin>>q;
    int sum=0;
    int a,b,c,a1,b1,c1;
    while(q--){
        cin>>a>>b>>c>>a1>>b1>>c1;
        for(int i=a;i<=a1;i++){
            for(int j=b;j<=b1;j++){
                for(int k=c;k<=c1;k++) m[i][j][k]=1;
            }
        }
    }
    for(int i=1;i<=w;i++){
            for(int j=1;j<=x;j++){
                for(int k=1;k<=h;k++){
                    if(m[i][j][k]==0) sum++;
                }
            }
        }
    cout<<sum;
    return 0;
}