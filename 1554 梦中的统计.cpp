#include<bits/stdc++.h>
using namespace std;
int v[10];
int main(){
    int m,n;
    string a;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        stringstream ss;
        ss<<i;
        string now;
        ss>>now;
        a+=now;
    }
    for(int i=0;i<a.length();i++){
        v[(int)a[i]-'0']++;
    }
    for(int i=0;i<10;i++) cout<<v[i]<<" ";
    return 0;
}