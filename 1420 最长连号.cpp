#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int cot=1,s=1;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(++a[i]==a[i+1]) cot+=1;
        else{
            s=max(cot,s);
            cot=1;
        }
    }
    cout<<s;
    return 0;
}