#include<bits/stdc++.h>
using namespace std;
int m[2000000];
int main(){
    int n;
    cin>>n;
    while(n--){
        double a;
        int t;
        cin>>a>>t;
        for(int i=1;i<=t;i++){
            int temp=floor(a*i);
            if(m[temp]==0) m[temp]=1;
            else m[temp]=0;
        }
    }
    cout<<find(m,m+2000000,1)-m;
    return 0;
}