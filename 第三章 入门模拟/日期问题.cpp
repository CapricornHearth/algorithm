#include <stdio.h>
int month[13][2]={
	{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}
}; 
bool isLeap(int year){
	return (year%4==0&&year%100!=0)||(year%400==0);
}
int main(){
	int year1,year2;
	int y1,y2,m1,m2,d1,d2;
	while(scanf("%d %d",&year1,&year2)!=EOF){
		if(year1>year2){
			int temp=year2;
			year2=year1;
			year1=temp;
		}
		 y1=year1/10000,m1=year1%10000/100,d1=year1%10000%100;
		 y2=year2/10000,m2=year2%10000/100,d2=year2%10000%100;
		int ans=1;
		while(y1<y2||m1<m2||d1<d2){
			d1++;
			if(d1==month[m1][isLeap(y1)]){
				m1++;d1=1;
			}	
			if(m1==13){
				y1++;m1=1;
			}
			ans++;
		}
		printf("%d\n",ans);	
	}
	return 0;
}
