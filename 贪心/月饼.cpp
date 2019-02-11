#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

struct yubing{
	double price;
	double num;
	double total;
};
bool cmp(yubing a,yubing b){
	return a.price>b.price; 
}
int main(){
	int n;
	double d; 
	yubing yue[1001];
	scanf("%d%lf",&n,&d);
	for(int i=0;i<n;i++){
		scanf("%lf",&yue[i].num);
	}
		for(int i=0;i<n;i++){
		scanf("%lf",&yue[i].total);
	}
	for(int i=0;i<n;i++)
		yue[i].price=yue[i].total/yue[i].num;
	double money=0;
	sort(yue,yue+n,cmp);
	double sum=0;
	for(int i=0;i<n;i++){
		if(sum<d){
			double 	x=sum+yue[i].num;
			if(x<d){
				sum=x;
					money+=yue[i].num*yue[i].price;
			}
		else{
			double y=d-sum;
			sum=d;
			money+=yue[i].price*y;
		}
		
		}else break;
	}
	printf("%.2f\n",money);
	return 0;
} 
