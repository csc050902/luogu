#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[12];
    int sum=0;
    for(int i=0;i<12;i++) cin>>a[i];
    int y=0,c=0,m=1;
    for(int i=0;i<12;i++){
        y+=300-a[i];
        c=(y/100)*100;
        y-=c;
        sum+=c;
        c=0;
        if(y<0){
            cout<<"-"<<i+1;
            m=0;
            break;
        }
    }
    if(m==1) cout<<y+sum*1.2;
    return 0;
}