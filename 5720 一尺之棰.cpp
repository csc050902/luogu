#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int c=1;
    while(a!=1){
        a/=2;
        c++;
    }
    cout<<c;
    return 0;
}