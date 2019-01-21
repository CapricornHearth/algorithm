/*
题目描述 
Excel可以对一组纪录按任意指定列排序。现请你编写程序实现类似功能。 
对每个测试用例，首先输出1行“Case i:”，其中 i 是测试用例的编号（从1开始）。随后在 N 行中输出按要求排序后的结果，即：当 C=1 时，按学号递增排序；当 C=2时，按姓名的非递减字典序排序；当 C=3 时，按成绩的非递减排序。当若干学生具有相同姓名或者相同成绩时，则按他们的学号递增排序。 
输入 
测试输入包含若干测试用例。每个测试用例的第1行包含两个整数 N (N<=100000) 和 C，其中 N 是纪录的条数，C 是指定排序的列号。以下有N行，每行包含一条学生纪录。每条学生纪录由学号（6位数字，同组测试中没有重复的学号）、姓名（不超过8位且不包含空格的字符串）、成绩（闭区间[0, 100]内的整数）组成，每个项目间用1个空格隔开。当读到 N=0 时，全部输入结束，相应的结果不要输出。 
输出 
对每个测试用例，首先输出1行“Case i:”，其中 i 是测试用例的编号（从1开始）。随后在 N 行中输出按要求排序后的结果，即：当 C=1 时，按学号递增排序；当 C=2时，按姓名的非递减字典序排序；当 C=3 时，按成绩的非递减排序。当若干学生具有相同姓名或者相同成绩时，则按他们的学号递增排序。 
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
	int c,n;	//n人数，c排序的列号 
	while(scanf("%d%d",&n,&c)){
		if(n!=0){
			for(int i=0;i<n;i++){
				scanf("%d%s%d",&stu[i].id,stu[i].name,&stu[i].score);
			}
			switch(c){
				case 1:
					sort(stu,stu+n,cmp);		//结构体排序需要cmp函数 
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
