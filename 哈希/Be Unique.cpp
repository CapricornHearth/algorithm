//http://codeup.cn/problem.php?cid=100000582&pid=2
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	int num[10001]={0};
		cin>>N;
		int bets[N];
		for(int i=0;i<N;i++){
			cin>>bets[i];
			int m=bets[i];
			num[m]++;
		}
		for(int i=0;i<N;i++){
			if(num[bets[i]]==1)
				{cout<<bets[i]<<endl;return 0;
				}
		}
		cout<<"None"<<endl;
		
	return 0;
} 
