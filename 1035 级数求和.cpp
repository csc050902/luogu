#include<bits/stdc++.h>
using namespace std;
int main(){
    double k;
    cin>>k;
    double s=0,n=1;
    while(s<=k){
        s+=1/n;
        n++;
    }
    cout<<n-1;
    return 0;
}