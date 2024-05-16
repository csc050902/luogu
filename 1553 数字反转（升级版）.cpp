#include<bits/stdc++.h>
using namespace std;
string f(string a){
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]=='0') a.erase(i);
        else break;
    }
    while(a[0]=='0')
        a.erase(0,1); 
    return a;
}
int main(){
    string a,b,c;
    cin>>a;
    if(a.find('.')!=string::npos){
        for(int i=a.find('.')-1;i>=0;i--)
            b+=a[i];
        for(int i=a.length()-1;i>a.find('.');i--)
            c+=a[i];
        if(f(b)==""){
            if(f(c)=="") cout<<0<<"."<<0;
            else cout<<0<<"."<<f(c);
        }
        else if(f(c)=="") cout<<f(b)<<"."<<0;
        else cout<<f(b)<<"."<<f(c);
    }
    else if(a.find('/')!=string::npos){
        for(int i=a.find('/')-1;i>=0;i--)
            b+=a[i];
        for(int i=a.length()-1;i>a.find('/');i--)
            c+=a[i];
        if(f(b)=="") cout<<0<<"/"<<f(c);
        else cout<<f(b)<<"/"<<f(c);
    }
    else if(a.find('%')!=string::npos){
        for(int i=(a.find('%')-1);i>=0;i--)
            b+=a[i];
        if(f(b)=="") cout<<0<<"%"; 
        else cout<<f(b)<<"%";
    }
    else{
        for(int i=a.length()-1;i>=0;i--) b+=a[i];
        if(f(b)=="") cout<<0; 
        else cout<<f(b);
    }
    return 0;
}