//http://codeup.cn/problem.php?cid=100000596&pid=1
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
vector<string> cour[2511];
int main(){
	//freopen("data.txt","r+",stdin);
	int n,k,id,stunum,c;
	char name[5];
	scanf("%d%d",&n,&k);
	while(n--){
		scanf("%s",name);
		scanf("%d",&c);
		for(int i=0;i<c;i++){
			scanf("%d",&id);
			string str=name;
			cour[id].push_back(str);
		}
	}
	int x=1;
	while(k--){
		sort(cour[x].begin(),cour[x].end());
		printf("%d %d\n",x,cour[x].size());
		for(vector<string>::iterator it=cour[x].begin();it!=cour[x].end();it++){
			cout<<*it<<endl;
		}
		x++;
	}
	return 0;
}
