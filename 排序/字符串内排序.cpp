/*
	��Ŀ���� 
����һ���ַ���������С�ڵ���200��Ȼ��������ַ�˳�������������ַ����� 
���� 
���������ж��飬�����ַ����� 
��� 
����ÿ������,��������Ľ���� 
�������� 
tianqin 
������� 
aiinnqt 
��ʾ
ע��������ַ����п����пո�
*/ 

#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	char str[201];
	while(gets(str)){ 		//gets�����Ի��з�������scanf�����Կո���� 
		int n=strlen(str);
		sort(str,str+n);
		printf("%s\n",str);
	}
	return 0;
}
