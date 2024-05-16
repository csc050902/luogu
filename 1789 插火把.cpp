#include<bits/stdc++.h>
using namespace std;
bool flag[105][105];
int arr[6] = {0,1,3,5,3,1};
int n,m,k,x,y;
bool in(int x,int y){
    if(x>=1 and x<=n and y>=1 and y<=n)
        return true;
    return false;
}
int main(){
    cin>>n>>m>>k;
    while(m--){
        cin>>x>>y;
        int cnt = 0,t_y=y-2;
        for(int i = x-2;i<=x+2;i++){
            t_y= y-2 + (5-arr[++cnt])/2;
            for(int t = 0;t<arr[cnt];t++)
                if(in(x,y))
                  flag[i][t_y+t]=true;
        }
    }
    while(k--){
        cin>>x>>y;
        for(int i=x-2;i<=x+2;i++)
            for(int j=y-2;j<=y+2;j++)
                if(in(x,y))
                  flag[i][j]=true;
    }
    int ans = 0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(!flag[i][j])
                ans++;
    cout<<ans<<endl;
    return 0;
}