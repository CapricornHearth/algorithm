/*
��Ŀ���� 
�������n����������������� 
���� 
����ĵ�һ�а���һ������n(1<=n<=100)�� ��������һ�а���n�������� 
��� 
�����ж���������ݣ�����ÿ�����ݣ���������n�����������ÿ�������涼��һ���ո� 
ÿ��������ݵĽ��ռһ�С� 
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
