/*
��Ŀ���� 
Excel���Զ�һ���¼������ָ���������������д����ʵ�����ƹ��ܡ� 
��ÿ�������������������1�С�Case i:�������� i �ǲ��������ı�ţ���1��ʼ��������� N ���������Ҫ�������Ľ���������� C=1 ʱ����ѧ�ŵ������򣻵� C=2ʱ���������ķǵݼ��ֵ������򣻵� C=3 ʱ�����ɼ��ķǵݼ����򡣵�����ѧ��������ͬ����������ͬ�ɼ�ʱ�������ǵ�ѧ�ŵ������� 
���� 
��������������ɲ���������ÿ�����������ĵ�1�а����������� N (N<=100000) �� C������ N �Ǽ�¼��������C ��ָ��������кš�������N�У�ÿ�а���һ��ѧ����¼��ÿ��ѧ����¼��ѧ�ţ�6λ���֣�ͬ�������û���ظ���ѧ�ţ���������������8λ�Ҳ������ո���ַ��������ɼ���������[0, 100]�ڵ���������ɣ�ÿ����Ŀ����1���ո������������ N=0 ʱ��ȫ�������������Ӧ�Ľ����Ҫ����� 
��� 
��ÿ�������������������1�С�Case i:�������� i �ǲ��������ı�ţ���1��ʼ��������� N ���������Ҫ�������Ľ���������� C=1 ʱ����ѧ�ŵ������򣻵� C=2ʱ���������ķǵݼ��ֵ������򣻵� C=3 ʱ�����ɼ��ķǵݼ����򡣵�����ѧ��������ͬ����������ͬ�ɼ�ʱ�������ǵ�ѧ�ŵ������� 
*/ 

#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct stuinfo{
	int id;
	char name[8];
	int score;
};
bool cmp1(stuinfo a,stuinfo b){
	if(a.score!=b.score) return a.score<b.score;
	else return a.id<b.id;
}
bool cmp2(stuinfo a,stuinfo b){
	if(a.name!=b.name) return strcmp(a.name,b.name)<0;
	else return a.id<b.id;
}
bool cmp(stuinfo a,stuinfo b){
	return a.id<b.id;
}
int main(){
	stuinfo stu[100001];
	int c,n;	//n������c������к� 
	while(scanf("%d%d",&n,&c)){
		if(n!=0){
			for(int i=0;i<n;i++){
				scanf("%d%s%d",&stu[i].id,stu[i].name,&stu[i].score);
			}
			switch(c){
				case 1:
					sort(stu,stu+n,cmp);		//�ṹ��������Ҫcmp���� 
					break;
				case 2:
					sort(stu,stu+n,cmp2);
					break;
				case 3:
					sort(stu,stu+n,cmp1);
					break;
				default:
					break; 
			}
			printf("Case %d:\n",c);
			for (int i=0;i<n;i++)
				printf("%06d %s %d\n",stu[i].id,stu[i].name,stu[i].score);
		}
	}
	return 0;
}
