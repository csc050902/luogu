#include<bits/stdc++.h>
using namespace std;
int n,cnt=0;
int main(){
    cin>>n;
    string a,b;
    vector<vector<string>>v(55);
    char flag[55];
    while(cin>>a){
        if(!isdigit(a[0])){
            cnt++;   
            flag[cnt]=a[0];   
            continue;
        }
        v[cnt].push_back(a);
    }
    for(int i=1;i<=cnt;i++){
        for(int j=0;j<v[i].size();j++){
            string str1=v[i][j*2],str2=v[i][j*2+1],str3,str4;
            stringstream ss1(str1),ss2(str2),ss3;
            int num1,num2;
            ss1>>num1;ss2>>num2;
            if(flag[i]=='a'){
                ss3<<num1+num2;
                ss3>>str3;
                str4=str1+"+"+str2+"="+str3;
            }else if(flag[i]=='b'){
                ss3<<num1-num2;
                ss3>>str3;
                str4=str1+"-"+str2+"="+str3;
            }else{
                ss3<<num1*num2;
                ss3>>str3;
                str4=str1+"*"+str2+"="+str3;
            }
            cout<<str4<<endl<<str4.length()<<endl;
            if(j*2+1==v[i].size()-1)
                break;
        }
    }
    return 0;
}