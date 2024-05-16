#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%02d",c);
            c++;
        }
        cout<<endl;
    }
    cout<<endl;
    int d=1;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--) cout<<"  ";
        for(int k=i;k>0;k--){
            printf("%02d",d);
            d++;
        }
        cout<<endl;
    }
    return 0;
}