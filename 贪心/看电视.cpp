//http://codeup.cn/problem.php?cid=100000584&pid=0
#include <stdio.h>
#include <algorithm>
using namespace std;
struct qujian{
	int start,end;
}jiemu[101]; 
bool cmp(qujian a,qujian b){
	if(a.start!=b.start) return a.start>b.start;
	else return a.end<b.end;
}
int main(){
	int n;
	while(scanf("%d",&n),n!=0){
		for(int  i=0;i<n;i++){
			scanf("%d%d",&jiemu[i].start,&jiemu[i].end);
		}
		sort(jiemu,jiemu+n,cmp);
		int ans=1,lastX=jiemu[0].start;
		for(int i=0;i<n;i++){
			if(lastX>=jiemu[i].end){		//从后向前取节目 
				ans++;
				lastX=jiemu[i].start;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
