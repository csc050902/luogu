#include<iostream>
using namespace std;
int ans[1500];
int main(){
	int begin,end;
	cin>>begin>>end;//���벻����
	int cnt=0;
	for(int i=begin;i<=end;i++){
		if((i%4==0&&i%100!=0)||i%400==0){//�ж������ǲ�����ͨ��������������ꡣ
			ans[cnt++]=i;//�Ǵ�,������һ
		}
	}
	cout<<cnt<<endl;//���������
	for(int i=0;i<cnt;i++){
		cout<<ans[i]<<" ";//�����
	}
	cout<<endl;//�����Ǹ���ϰ��?
	return 0;//�����Ľ���
}