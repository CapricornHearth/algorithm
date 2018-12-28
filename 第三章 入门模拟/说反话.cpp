#include <stdio.h>
#include <string.h>
int main(){
	char str[90];
	gets(str);
	int n=strlen(str);
	char str2[90][90];
	int k=0,j=0;
	for (int i=0;i<n;i++){
		if(str[i]==' '){
			str2[k][j]='\0';
			j=0;k++;
		}else{
			str2[k][j]=str[i];
			j++;
		}
	}

	for(int i=k;i>=0;i--){
		printf("%s",str2[i]);		//²»ÓÃ¼Ó& 
		if(i>0) printf(" ");
	}
	return 0;
}
