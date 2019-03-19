//http://codeup.cn/problem.php?cid=100000597&pid=0
#include <stdio.h>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int getthesame(set<int> a,set<int> b){
	int len=0;
	int i=a.size();
	set<int>::iterator it=a.begin(); 
	while(i--){
		int key=*it;
		if(b.find(key)!=b.end()){	//集合未找到返回end 
			len++;
		}
		it++;
	}
	return len;
}
int main(){
	//freopen("data.txt","r+",stdin);
	int n,p,m;
	scanf("%d",&n); 
	set<int> jihe[51];
	int id=1;	//集合索引 
	while(n--){
		scanf("%d",&m);
		while(m--){
			int k;
			scanf("%d",&k);
			jihe[id].insert(k);
		}
		id++;
	}
	scanf("%d",&p);
	double similarity;
	while(p--){
		int id1,id2;
		scanf("%d%d",&id1,&id2);
		int nt,ns;
		ns=getthesame(jihe[id1],jihe[id2]);
		nt=jihe[id1].size()+jihe[id2].size()-ns;
		similarity=(double)ns/(double)nt*100;
		printf("%.1f%\n",similarity);
	}
	return 0;
}
