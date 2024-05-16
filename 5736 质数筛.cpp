#include<bits/stdc++.h>
using namespace std;
const int lim = 1e8;
const int lim2=5e6;
int prime[lim2],cnt=0; 
bool is[lim+5];  //bool === false    
void ora(){ 
    is[1]=true;
    for(int i=2;i<=9989899;i++){
        if(is[i]==false)
            prime[++cnt]=i;
        for(int j=1;j<=cnt and prime[j]*i<=9989899;j++){
            is[prime[j]*i]=true;
            if(i%prime[j]==0) break;
        } 
    }

}
int main(){
    int n;
    cin>>n;
    int a;
    ora();
    while(n--){
        cin>>a;
        if(is[a]==false) cout<<a<<" ";
    }
    return 0;
}