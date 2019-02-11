#include <stdio.h>
#include <algorithm>
using namespace std;
const int maxn=110;
struct inteval{
	int x,y;//开区间左右端点 
}I[maxn];
bool cmp(inteval a,inteval b){
	if(a.x!=b.x) return a.x>b.x;	//先按左端点从大到小排序 
	else return a.y<b.y;		//左端点相同，按右端点从小到大排序 
}
int main(){
	int n;
	while(scanf("%d",&n),n!=0){
		for(int i=0;i<n;i++){
			scanf("%d%d",&I[i].x,&I[i].y);
		}
	} 
	sort(I,I+n,cmp);
	int ans=1,lastx=I[0].x;
	for(int i=0;i<n;i++){
		if(I[i].y<=lastx){
			lastx=I[i].x;
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
} 
