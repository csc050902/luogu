#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n==0||n==1) return 0;
    for(int i=2;i<sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}
int main(){
    string a;
    cin>>a;
    int maxn=0,minn=100;
    int cnt=0;
    for(int i=0;i<a.length();i++){
        for(int j=0;j<a.length();j++)
            if(a[i]==a[j]) cnt++;
        maxn=max(maxn,cnt);
        minn=min(minn,cnt);
        cnt=0;
    }
    if(f(maxn-minn)==1) cout<<"Lucky Word"<<endl<<maxn-minn;
    else cout<<"No Answer"<<endl<<"0";
    return 0;
}