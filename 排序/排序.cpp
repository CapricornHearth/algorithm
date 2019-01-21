/*
题目描述 
对输入的n个数进行排序并输出。 
输入 
输入的第一行包括一个整数n(1<=n<=100)。 接下来的一行包括n个整数。 
输出 
可能有多组测试数据，对于每组数据，将排序后的n个整数输出，每个数后面都有一个空格。 
每组测试数据的结果占一行。 
*/ 

#include<stdio.h>
#include <algorithm>
using namespace std;
 
int main(){
	int num[102];
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		sort(num,num+n);
		for(int i=0;i<n;i++){
			printf("%d ",num[i]);
		}
		printf("\n");
	}
	
	return 0;
} 
