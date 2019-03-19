//http://codeup.cn/problem.php?cid=100000596&pid=0
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
//名字为固定格式，可以采用hash映射
const int maxn=180000;//最大('Z' - 'A') * 26 * 26 * 10 + ('Z' - 'A') * 26 * 10 + ('Z' - 'A') * 10 + '9' - '0';
vector<short> list[maxn];
int strtoint(char a[]){
	return (a[0]-'A')*26*26*10+(a[1]-'A')*26*10+(a[2]-'A')*10+a[3]-'0'; 
}
int main(){
	//freopen("data.txt", "r+", stdin);
	int n,k,idx,id,stunum;
	char name[5];
	scanf("%d%d",&n,&k);
	while(k--){
		scanf("%d%d",&id,&stunum);
		while(stunum--){
			scanf("%s",name);
			idx=strtoint(name);
			list[idx].push_back(id);
		}
	}
	while(n--){
		scanf("%s",name);	//每个空格一次输入，可以一起输入，分开处理 
		idx=strtoint(name);
		printf("%s %d",name,list[idx].size());
		if(list[idx].size()!=0){
			sort(list[idx].begin(),list[idx].end());
			for(int i=0;i<list[idx].size();i++){
				printf(" %d",list[idx][i]);
			}
		}
		printf("\n");
	}
	return 0;
}
