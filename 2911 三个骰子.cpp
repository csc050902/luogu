#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    for(int i=1;i<=s1;i++){
        int c=0;
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                c=i+j+k;
                a[c]++;
            }
        }
    }
    int max=0,maxi=0;
    for(int i=3;i<=s1+s2+s3;i++){
        if(a[i]>max){
            max=a[i];
            maxi=i;
        }
    }
    cout<<maxi;
    return 0;
}