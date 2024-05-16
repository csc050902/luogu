#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,g;
    cin>>a;
    b=a,g=a;
    int boy=0,girl=0;
    for(int i=0;i<b.length();i++){
        if(b[i]=='b'){
            if(b[i+1]=='o'){
                if(b[i+2]=='y'){
                    b[i+1]=b[i+2]='.';
                    boy++;
                }
                else{
                    b[i+1]='.';
                    boy++;
                }
            }
            else boy++;
        } 
        else if(b[i]=='o'){
            if(b[i+1]=='y'){
                b[i+1]='.';
                boy++;
            }
            else boy++;
        } 
        else if(b[i]=='y'){
            boy++;
        }
    }
    for(int i=0;i<g.length();i++){
        if(g[i]=='g'){
            if(g[i+1]=='i'){
                if(g[i+2]=='r'){
                    if(g[i+3]=='l'){
                        g[i+3]=g[i+2]=g[i+1]='.';
                        girl++;
                    }
                    else{
                        g[i+2]=g[i+1]='.';
                    girl++;
                    }
                }
                else{
                    g[i+1]='.';
                    girl++;
                }
                
            }
            else girl++;
        }
        else if(g[i]=='i'){
            if(g[i+1]=='r'){
                if(g[i+2]=='l'){
                    g[i+1]=g[i+2]='.';
                    girl++;
                }
                else{
                    g[i+1]='.';
                    girl++;
                }
            }
            else girl++;
        }
        else if(g[i]=='r'){
            if(g[i+1]=='l'){
                g[i+1]='.';
                girl++;
            }
            else girl++;
        }
        else if(g[i]=='l'){
            girl++;
        }
    }
    cout<<boy<<endl<<girl;
    return 0;
}