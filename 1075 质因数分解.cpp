#include<bits/stdc++.h>
using namespace std;
int f(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return 1;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(f(i)==0&&n%i==0) cout<<n/i;
    }
    return 0;
}