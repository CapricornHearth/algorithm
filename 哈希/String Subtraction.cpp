#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s1,s2;
	while(1){
	getline(cin,s1);//c++输入带空格的string,c的gets(str),str为char[] 
	getline(cin,s2);

	int asc1[130]={0};
	int asc2[130]={0};
	for(int i=0;i<s2.length();i++){
		asc2[s2[i]]++;
	}
		for(int i=0;i<s1.length();i++){
		asc1[s2[i]]++;
	}
	for(int i=0;i<130;i++){
		if(asc1[i]==1&&asc2[i]==1){
			char h=(char)i;
			s1.erase(std::remove(s1.begin(), s1.end(), h),  s1.end());
		}
	}
	cout<<s1<<endl;	
	}
	return 0;
}
