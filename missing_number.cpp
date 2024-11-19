#include <iostream>
using namespace std;
int main(){
	int n, num;
	long long sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	for(int i=1;i<=n-1;i++){
		cin>>num;
		sum-=num;
	}
	cout<<sum;
	
	return 0;
}
