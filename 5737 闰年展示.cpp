#include<iostream>
using namespace std;
int ans[1500];
int main(){
	int begin,end;
	cin>>begin>>end;//输入不解释
	int cnt=0;
	for(int i=begin;i<=end;i++){
		if((i%4==0&&i%100!=0)||i%400==0){//判断这年是不是普通闰年或者世纪闰年。
			ans[cnt++]=i;//记答案,次数加一
		}
	}
	cout<<cnt<<endl;//先输出次数
	for(int i=0;i<cnt;i++){
		cout<<ans[i]<<" ";//输出答案
	}
	cout<<endl;//换行是个好习惯?
	return 0;//华丽的结束
}