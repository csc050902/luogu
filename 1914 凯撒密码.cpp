#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]+n>'z') a[i]='a'+(a[i]+n-'z'-1);
        else a[i]=a[i]+n;
    }
    for(auto i:a)cout<<i;
    return 0;
}