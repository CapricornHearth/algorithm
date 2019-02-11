//http://codeup.cn/problem.php?cid=100000584&pid=6
//改进：用队列 
#include <stdio.h>
int main(){
	int n;
	while(scanf("%d",&n),n!=0){
		int m=0;
		while(n>=50){
			n-=50;
			m++;
		}
		if(m!=0){
			if(n!=0) printf("50*%d+",m);
			else printf("50*%d",m);
		} 
		m=0;
		while(n>=20){
			n-=20;
			m++;
		}
			if(m!=0){
			if(n!=0) printf("20*%d+",m);
			else printf("20*%d",m);
		} 
			m=0;
		while(n>=10){
			n-=10;
			m++;
		}
			if(m!=0){
			if(n!=0) printf("10*%d+",m);
			else printf("10*%d",m);
		} 
			m=0;
		while(n>=5){
			n-=5;
			m++;
		}
			if(m!=0){
			if(n!=0) printf("5*%d+",m);
			else printf("5*%d",m);
		} 
			m=0;
		while(n>=1){
			n-=1;
			m++;
		}
		 if(m!=0)printf("1*%d",m);
		printf("\n");
	}
	return 0;
} 
