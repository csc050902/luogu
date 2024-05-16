#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    int a,b;
    int sum=0;
    cin>>m>>n;
    vector<int> v(m+5,1);
    while(n--){
        cin>>a>>b;
        for(int i=a;i<=b;i++) v[i]=0;
    }
    for(int i=0;i<=m;i++) sum+=v[i];
    cout<<sum;
    return 0;
}