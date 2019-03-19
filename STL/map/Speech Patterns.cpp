//http://codeup.cn/problem.php?cid=100000599&pid=0
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
set<char> alpha;
map<string,int>  word(string s){	//建立map 
	map<string,int> test;
	int k=0;
	while(k<s.length()){
	string word;
	while(alpha.find(s[k])!=alpha.end()){
	
		word+=s[k];
		k++;
	}
	//cout<<word<<endl;
	if(test.find(word)==test.end()){
		test[word]=1;
	}else{
		test[word]++;
	}	
	while(alpha.find(s[k])==alpha.end()){
		k++;
	}
  }
  return test;
}
int main(){
	string text;
	for(int i=0;i<26;i++){	//建立字典 
		int a=i+'A';
		char b=(char)a;
		alpha.insert(b);
	}
	for(int i=0;i<26;i++){
		int a=i+'a';
		char b=(char)a;
		alpha.insert(b);
	}
	for(int i=0;i<10;i++){
		int a=i+'0';
		char b=(char)a;
		alpha.insert(b);
	}
	/* 
	for(set<char>::iterator it=alpha.begin();it!=alpha.end();it++){
		cout<<*it<<endl;
	}*/
	while(getline(cin,text)){
	transform(text.begin(), text.end(), text.begin(), ::tolower);//转为小写 
	map<string,int> test=word(text);
	string often;
	int count=0;
	map<string,int>::iterator it=test.begin();
	while(it!=test.end()){
		if(it->second>count) {
			often=it->first;
			count=it->second;
		}else if(it->second==count){	//选小的单词 
			if(it->first<often){
				often=it->first;
			count=it->second;
			}
		}
		it++; 
	}
	cout<<often<<" "<<count<<endl;
 }
	return 0;
} 

/*
//AC的代码 
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
 
bool check(char ch)
{
	if (ch>='a'&&ch<='z') return true;
	if (ch>='A'&&ch<='Z') return true;
	if (ch>='0'&&ch<='9') return true;
	return false;//合法字符 
}
 
int main()
{
	map<string,int>mp;
	string s,ans;
	string word;
	getline(cin,s);
	for (int i=0;i<s.length();i++)
	{
		
		if (check(s[i]) ==true)
		{
			if (s[i]>='A'&&s[i]<='Z')
			s[i]+=32;	
			
			word+=s[i];
		}
		if (check(s[i])==false || i==s.length()-1)
		{
			if (word.length()!=0)
			mp[word]++;
			
			word = "";//清空 
		}
	}
	int max=-1;
	for (map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
	{
		if (it->second>max)
		{
			max = it->second;
			ans = it->first;
		}
	}
	cout<<ans<<" "<<max<<endl;
	return 0;
}
*/ 
