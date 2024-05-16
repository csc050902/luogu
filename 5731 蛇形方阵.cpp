#include<bits/stdc++.h>
using namespace std;
bool flag[10][10];
int n;
bool in(int x,int y){
    if(x<1 or x>n or y<1 or y>n or flag[x][y]==true)
        return false;
    return true;
}
int arr[10][10];

int main(){
    int cnt=0,t=0,x=1,y=0;
    cin>>n;
    int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    while(1){      
        if(cnt==n*n)
            break;
        int tx=dir[t][0]+x;
        int ty=dir[t][1]+y;
        if(in(tx,ty)==false){
            t=(t+1)%4;
            continue;
        }
        x=tx,y=ty;
        flag[x][y]=true;
        arr[x][y]=++cnt;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            printf("%3d",arr[i][j]);
        cout<<endl;
    }
    return 0;
}