#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=3;i<a.length();i+=5)
        if(a[i]!=' ') cout<<a[i]<<" ";
        else cout<<0<<" ";
    return 0;
}