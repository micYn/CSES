#include <iostream>
using namespace std;
int main(){
	int row_step[8]={-2, -1, 1, 2, 2, 1, -1, -2};
	int col_step[8]={1, 2, 2, 1, -1, -2, -2, -1};
	int n;
	cin>>n;
	unsigned long long count[n+1]={0};
	count[2] = 6;
	for(int i=3;i<=n;i++){
		count[i] = count[i-1];
		unsigned long long sum = (unsigned long long)(2*i-1) * (i*i-1);
		for(int j=0;j<i-1;j++){
			for(int k=0;k<8;k++){
				if(i-1 + row_step[k]>=0 && i-1 + row_step[k]<=i-1 && j + col_step[k]>=0 && j + col_step[k]<=i-1){
					--sum;
				}
				if(j + row_step[k]>=0 && j + row_step[k]<=i-1 && i-1 + col_step[k]>=0 && i-1 + col_step[k]<=i-1){
					--sum;
				}
			}
		}
		sum-=2;
		count[i]+=sum;
		count[i]-=(unsigned long long)(2*i-1) * (2*i-2)/2;
		count[i]+=2;
	}
	for(int i=1;i<=n;i++){
		cout<<count[i]<<'\n';
	}
	return 0;
}