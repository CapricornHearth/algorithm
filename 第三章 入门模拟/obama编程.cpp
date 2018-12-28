#include <stdio.h>
int main(){
	char c;
	int n;
	scanf("%d %c",&n,&c);
	int colunm,row;
	if(n%2==0){ colunm=n;row=n/2;
	}
		else{
			 colunm=n;row=n/2+1;
	}

	char** ju=new char*[row];
	for(int i=0;i<row;i++){
		ju[i]=new char[colunm];
	}

	for(int i=0;i<row;i++){
		for (int j=0;j<n;j++){
			ju[i][j]=' ';
		}
	}
	for (int i=0;i<row;i++){
		if(i==0||i==row-1){	
			for(int j=0;j<colunm;j++)			
				ju[i][j]=c;	}
		
		else{
			ju[i][0]=c;
			ju[i][colunm-1]=c;
		}
	}
	for(int i=0;i<row;i++){
		for (int j=0;j<n;j++){
			printf("%c",ju[i][j]);
		}
		printf("\n");
	}
	return 0;
}
