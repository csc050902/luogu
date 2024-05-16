#include<bits/stdc++.h>
using namespace std;
int f(string a){
    int sum=1;
    for(int i=0;i<a.length();i++){
        for(int j=0;j<26;j++){
            if(a[i]=='A'+j) sum*=(j+1);
        }
    }
    return sum;
}
int main(){
    string a,b;
    cin>>a>>b;
    if(f(a)%47==f(b)%47) cout<<"GO";
    else cout<<"STAY";
    return 0;
}