/*
	题目描述 
输入一个字符串，长度小于等于200，然后将输出按字符顺序升序排序后的字符串。 
输入 
测试数据有多组，输入字符串。 
输出 
对于每组输入,输出处理后的结果。 
样例输入 
tianqin 
样例输出 
aiinnqt 
提示
注意输入的字符串中可能有空格。
*/ 

#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	char str[201];
	while(gets(str)){ 		//gets输入以换行符结束，scanf输入以空格结束 
		int n=strlen(str);
		sort(str,str+n);
		printf("%s\n",str);
	}
	return 0;
}
