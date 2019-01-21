//PAT A1025
#include <stdio.h>
#include <algorithm> 
#include <string.h>
using namespace std;		//sort函数 
struct StuInfo{
	char stuID[15];				//注册编号 
	int score;				//分数 
	int local_rank;			//本地排名 
	int final_rank;			//总排名 
	int loc_number;			//地区编号 
};

bool cmp(StuInfo a,StuInfo b){
	if(a.score!=b.score) return a.score>b.score;		//按分数从大到小排序 
	else return strcmp(a.stuID,b.stuID)<0;				//分数相同，按准考证号从小到大排序 
}

int main(){
	int n;//地区数
	int k;//各地区人数
	int num=0;//总人数 
	scanf("%d",&n);
	StuInfo ranklist[30010];
	for(int i=1;i<=n;i++){
		scanf("%d",&k);
		for(int j=1;j<=k;j++){
			ranklist[num].loc_number=i;
			scanf("%s %d",ranklist[num].stuID,&ranklist[num].score);
			num++;
		}
		sort(ranklist+num-k,ranklist+num,cmp);
		ranklist[num-k].local_rank=1;
		int rank=1,exnum=1;		//exnum为同排名人数 
		for(int i=1;i<k;i++){
			if(ranklist[num-k+i].score==ranklist[num-k+i-1].score)
			{
				ranklist[num-k+i].local_rank=rank;
				exnum++;
			}
			else{
				rank+=exnum;
				ranklist[num-k+i].local_rank=rank;
				exnum=1;
			}
		} 
	} 
	sort(ranklist,ranklist+num,cmp);
	printf("%d\n",num);
	ranklist[0].final_rank=1;
	int exnum=1,rank=1;
	printf("%s %d %d %d\n",ranklist[0].stuID,ranklist[0].final_rank,ranklist[0].loc_number,ranklist[0].local_rank);
	for (int i=1;i<num;i++){
		if(ranklist[i].score==ranklist[i-1].score){
			ranklist[i].final_rank=rank;
			exnum++;
		}
		else{
			rank+=exnum;
			ranklist[i].final_rank=rank;
			exnum=1;
		}
		printf("%s %d %d %d\n",ranklist[i].stuID,ranklist[i].final_rank,ranklist[i].loc_number,ranklist[i].local_rank);
	}
	
	return 0;
}
