/*
��Ŀ���� 
����һϵ������������������������������ʣ�µ����������� 
���� 
�����һ�а���1������N��1<=N<=1000�������������ݵĸ����� 
��������һ����N�������� 
��� 
�����ж���������ݣ�����ÿ�����ݣ� 
��һ�����һ������������N�������е����ֵ��������ֵ��������ȥ������ʣ�µ����������� 
�ڶ��н�����Ľ������� 
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
