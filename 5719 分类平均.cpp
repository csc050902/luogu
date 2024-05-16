#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int cot1=0,cot2=0;
    double sum1=0,sum2=0;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            cot1++;
            sum1+=i;
        }
        else{
            cot2++;
            sum2+=i;
        }
    }
    printf("%.1f %.1f",sum1/cot1,sum2/cot2);
    return 0;
}