#include<bits/stdc++.h>
using namespace std;
struct f{
    int a;
    int b;
    int c;
    int sum;
};
int main(){
    int m;
    int cot=0;
    cin>>m;
    f x[m];
    for(int i=0;i<m;i++){
        cin>>x[i].a>>x[i].b>>x[i].c;
        x[i].sum=x[i].a+x[i].b+x[i].c;
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(abs(x[i].a-x[j].a)<=5&&abs(x[i].b-x[j].b)<=5&&abs(x[i].c-x[j].c)<=5&&abs(x[i].sum-x[j].sum)<=10) cot++;
        }
    }
    cout<<cot;
    return 0;
}