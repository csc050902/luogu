#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,cnt1=0,cnt2=0,Max=0;
    string a,b,c;
    cin>>n>>a;
    b=a,c=a;
    for(int j=0;j<n-1;j++)
        if(a[j]=='V'&&a[j+1]=='K') cnt1++;
    Max=max(Max,cnt1);  
    for(int i=0;i<n;i++){
        cnt1=0,cnt2=0;
        b=a,c=a;
        b[i]='V';
        c[i]='K';
        for(int j=0;j<n-1;j++){
            if(b[j]=='V'&&b[j+1]=='K') cnt1++;
        }
        for(int j=0;j<n-1;j++){
            if(c[j]=='V'&&c[j+1]=='K') cnt2++;
        }
        Max=max(Max,cnt1);
        Max=max(Max,cnt2);
    }
    cout<<Max;
    return 0;
}