#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=1;
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            printf("%02d",c);
            c++;
        }
        cout<<endl;
    }
    return 0;
}