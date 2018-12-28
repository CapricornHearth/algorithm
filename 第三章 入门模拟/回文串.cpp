#include <stdio.h>
#include<string.h> 

int main(){
	char str[256];
	scanf("%s",str);
	int n=strlen(str);
	int i,j;
	for(i=0,j=n-1;j>i;j--,i++){
		if(str[i]!=str[j]){
			printf("NO\n");
			break;
		}
	}
	if(j<=i) printf("YES\n");	
	return 0; 
}
 
