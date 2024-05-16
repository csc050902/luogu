#include<bits/stdc++.h>
using namespace std;
int main(){
    double s,a=2;
    cin>>s;
    int cot=0;
    while(s>0){
        s-=a;
        cot++;
        a*=0.98;
    }
    cout<<cot;
    return 0;
}