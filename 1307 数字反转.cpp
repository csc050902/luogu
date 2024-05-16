#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=0;
    while(n){
        m=m*10+n%10;
        n/=10;
    }
    cout<<m;
    return 0;
}