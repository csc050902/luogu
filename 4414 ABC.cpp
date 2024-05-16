#include<bits/stdc++.h>
using namespace std;
signed main(){
    int a,b,c;
    cin>>a>>b>>c;
    set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    map<char,int>m;
    auto i = s.begin();
    m['A']=*(i++);
    m['B']=*(i++);
    m['C']=*(i++);
    string d;
    cin>>d;
    for(char t:d){
        cout<<m[t]<<" ";
    }
    return 0;
}