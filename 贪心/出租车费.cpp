//http://codeup.cn/problem.php?cid=100000584&pid=1
#include<stdio.h>
//当行驶过13km时，分段便宜。相当总路程减8km，第二次分段为21km 
int main(){
	int n;
	while(scanf("%d",&n),n!=0){
		double sum=0;
		
		while(n>13){
			sum+=18.0;
			n-=8;
		}
		if(n<=4){
			sum+=10.0;
		}else if(n<=8){
			sum+=10.0;
			sum+=(n-4)*2;
		}
		else if(n<=13){
			sum+=18+(n-8)*2.4; 
		}
		if((int)sum==sum){
			printf("%d\n",(int)sum);
		}else
		printf("%.1f\n",sum);
		
	} 
	return 0;
} 
