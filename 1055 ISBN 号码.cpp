#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a; 
    int sum =0;
    int c=1;
    for(int i=0;i<11;i++){
        if(i!=1&&i!=5) {
        sum=sum+(a[i]-'0')*c;
        c++;
    }
    }
    if(sum%11==10){
        if(a[a.length()-1]=='X') cout<<"Right";
        else {
            a[a.length()-1]='X';
            cout<<a;
        }
    }
    else{
        if(a[a.length()-1]-'0'==sum%11) cout<<"Right";
        else {
            a[a.length()-1]=sum%11+'0';
            cout<<a;
            }
    }
    return 0;
}