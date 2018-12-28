
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
		int i=0;
		while(n!=1){
			++i;
			if(n%2==0){
				n/=2;
			}else{
				n=(3*n+1)/2;
			}
		}
		printf("%d\n",i);
	
	return 0;
} 
