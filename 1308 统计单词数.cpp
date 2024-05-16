#include<bits/stdc++.h>
using namespace std;
int main(){
    string sum,tar,a="";
    int cnt=0,w=1000000;
    getline(cin,sum);
    for(int i=0;i<sum.length();i++)
        if(sum[i]>='A'&&sum[i]<='Z') sum[i]=sum[i]+('a'-'A');
    getline(cin,tar);
    for(int i=0;i<tar.length();i++)     
        if(tar[i]>='A'&&tar[i]<='Z') tar[i]=tar[i]+('a'-'A');
    for(int i=0;i<tar.length();i++){
        if(tar[i]!=' ') a+=tar[i];
        else{
            if(sum==a){
                cnt++;
                w=min(w,i-(int)a.length());
            }
            a="";
        }
    }
    if(cnt==0) cout<<-1;
    else cout<<cnt<<" "<<w;
    return 0;
}