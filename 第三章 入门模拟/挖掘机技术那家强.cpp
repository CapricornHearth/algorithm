#include<stdio.h>
int main(){
	int maxn=100001;
	int school[maxn]={0};
	int n;
	if(scanf("%d",&n)){};

	int j,k;//j´æ´¢±àºÅ£¬k´æ´¢·ÖÊý 
	for(int i=1;i<=n;i++){
		if(scanf("%d%d",&j,&k)){};
		school[j]+=k; 
	} 
		int maxsum=0,id=0;
	for (int k=1;k<n;k++){
		if(school[k]>maxsum){
			maxsum=school[k];
			id=k;
		}
	}
	printf("%d %d\n",id,maxsum);
	
	return 0;
} 
