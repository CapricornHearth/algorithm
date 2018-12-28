#include<stdio.h>
int main()
{
	int nums[210];
	int n;
	while(scanf("%d",&n)!=EOF){  //输入多组数据 
	for(int i=0;i<n;i++){
		scanf("%d",&nums[i]);
	}
	int x;
	scanf("%d",&x);
	int j;
	for (j=0;j<n;j++){
		if(nums[j]==x){printf("%d\n",j);
		break;
		}
		 
	}
	if(j==n) printf("-1\n");	}
	return 0;
}
