#include <stdio.h>

int main(){
	int m,n; //m书数目，n读者数 
	while(scanf("%d",&n)!=EOF){		//有多个案例 
	scanf("%d",&m);
	int reader[10000]={0};
	int books[201]={0};	
	int x;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		reader[i]=x;
		books[x]++;
	} 
	for(int i=1;i<=n;i++){
		int k=reader[i];
		if(books[k]==1) printf("BeiJu\n");
		else printf("%d\n",books[k]-1);
	}	
	}
	return 0;
} 
