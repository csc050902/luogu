#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c;
    while(scanf("%d",&c)!=EOF){
        if(c==1){
            string a;
            cin>>a;
            s+=a;
            cout<<s<<endl;
        }
        if(c==2){
            int x1,x2;
            cin>>x1>>x2;
            s=s.substr(x1,x2);
            cout<<s<<endl;

        }
        if(c==3){
            int x;
            string a;
            cin>>x>>a;
            s.insert(x,a);
            cout<<s<<endl;
        }
        if(c==4){
            string a;
            cin>>a;
            if(s.find(a)==string::npos)
                cout<<-1<<endl;
            else
                cout<<s.find(a)<<endl;
        }
    }
    return 0;
}