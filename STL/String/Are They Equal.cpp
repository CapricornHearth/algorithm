//PAT A1060	 Are They Equal
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int n; //有效位数
string deal(string s,int &e){
	int k=0;
	while(s.length()>0&&s[0]=='0'){
		s.erase(s.begin());	//去掉先导0 
	}
	if(s[0]=='.'){		//如果是小数 
		s.erase(s.begin());
		while(s.length()>0&&s[0]=='0'){
			s.erase(s.begin());	//去掉小数点后非零位前所有的0 
			e--;		//每去掉一个0，指数减1 
		}
	}
	else{
		while(k<s.length()&&s[k]!='.'){ //寻找小数点 
			k++;
			e++;
		}
		if(k<s.length()){
			s.erase(s.begin()+k); //去掉小数点 
		}
	}
	if(s.length()==0){
		e=0;
	}
	int num=0;
	k=0;
	string res;
	while(num<n){		//只要精度还没达到n 
		if(k<s.length()) res+=s[k++];
		else res+='0';
		num++;
	}
	return res;
} 
int main(){
	string s1,s2,s3,s4;
	cin>>n>>s1>>s2;
	int e1=0,e2=0;
	s3=deal(s1,e1);
	s4=deal(s2,e2);
	if(s3==s4&&e1==e2){
		cout<<"YES 0."<<s3<<"*10^"<<e1<<endl;
	} else{
		cout<<"NO O."<<s3<<"*10^"<<e1<<" 0."<<s4<<"*10^"<<e2<<endl; 
	}
	return 0;
} 
