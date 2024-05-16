#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=1,k=1;
    cin>>n;
    n/=52;
    int c=1;
    while(k){
        for(x=1;x<=100;x++){
            if(7*x+21*k==n){
                cout<<x<<endl<<k;
                c=0;
                break;
            }
        }
        if(c==0) break;
        k++;
    }
    return 0;
}