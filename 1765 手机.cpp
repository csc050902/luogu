#include<bits/stdc++.h>
using namespace std;
signed main(){
    map<char,int>m;
    int arr[15]={0,3,3,3,3,3,4,3,4};
    char c='a'-1;
    int cnt = 0,ans=0;
    for(int i=1;i<=8;i++)
        for(int j=1;j<=arr[i];j++)
            m[char(c+(++cnt))]=j; 
    m[' ']=1;
    string d;
    getline(cin,d);
    for(char t:d)
        ans+=m[t];
    cout<<ans;
    return 0;
}