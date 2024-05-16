#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int sum=0,count=0;
    for(int i=1;1;i++){
        for(int j=1;j<=i;j++){
            if(count==k){
                cout<<sum<<endl;
                return 0;
            }
            sum+=i;
            count++;
        }
    }
    cout<<sum;
    return 0;
}