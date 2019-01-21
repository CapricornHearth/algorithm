/*
题目描述 
输入一系列整数，将其中最大的数挑出，并将剩下的数进行排序。 
输入 
输入第一行包括1个整数N，1<=N<=1000，代表输入数据的个数。 
接下来的一行有N个整数。 
输出 
可能有多组测试数据，对于每组数据， 
第一行输出一个整数，代表N个整数中的最大值，并将此值从数组中去除，将剩下的数进行排序。 
第二行将排序的结果输出。 
*/ 

#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int nums[1002];
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++)
			scanf("%d",&nums[i]);
		sort(nums,nums+n);
		if(n==1){
			printf("%d\n-1\n",nums[0]);
		}	
		else {
			printf("%d\n",nums[n-1]);
			for(int i=0;i<n-1;i++)
				printf("%d ",nums[i]);
			printf("\n");
		}

	}
	return 0;
}
