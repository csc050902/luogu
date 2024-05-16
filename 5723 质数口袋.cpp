#include<bits/stdc++.h>
using namespace std;
const int Max = 1e6;
int prime[Max+5],cnt=0,sum=0,L;
bool flag[Max+5];
void o(){
    flag[1]=true;
    for(int i=2;i<=Max;i++){
        if(flag[i]==false){
            if(sum+i>L){
                for(int p=1;p<=cnt;p++){
                    cout<<prime[p]<<endl;
                }
                cout<<cnt<<endl;
                return;
            }
            prime[++cnt]=i;
            sum+=i;
        }
        for(int j=1;j<=cnt && i*prime[j]<=Max;j++){
            flag[prime[j]*i]=true;
            if(i%prime[j]==0)
                continue;
        }
    }
}
int main(){
    cin>>L;
    o();
    return 0;
}