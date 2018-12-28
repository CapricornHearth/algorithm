#include <stdio.h>
 
int main(){
	int a,b,d;
	scanf("%d%d%d",&a,&b,&d);
	int sum=a+b;
	int num[31]={0};
	int count=0;
	int j=1;
	do{
		count++;
		int i=sum%d;
		num[j]=i;
		sum/=d;
		j++; 
	}while(sum);
	for(int i=count;i>0;i--){
		printf("%d",num[i]);
	}
	return 0;
} 
