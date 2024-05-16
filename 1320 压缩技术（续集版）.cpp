#include<bits/stdc++.h>
using namespace std;
string sum,ans;
int cnt=0,flag=0;
int main(){
    cin>>sum;
    ans+=sum;
    int n = sum.length();
    for(int i=0;i<n-1;i++){
        cin>>sum;
        ans+=sum;
    }
    cout<<n<<" ";
    for(int i=0;i<ans.length();i++){
        if(ans[i]-'0'==flag)
            cnt++;
        else{
            cout<<cnt<<" ";
            flag=!flag;
            cnt=1;
        }
    }
    if(cnt)
        cout<<cnt;
    return 0;
}