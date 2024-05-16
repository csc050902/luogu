#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    string a;
    for(int i=1;i<=n;i++){
        stringstream ss;
        ss<<i;
        string now;
        ss>>now;
        a+=now;
    }
    cout<<count(a.begin(),a.end(),x+'0')<<endl;
    return 0;
}