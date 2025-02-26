#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=1;i<=n;i++){
		int tmp;
		cin>>tmp;
		v.push_back(tmp);
	}
	vector<long long> dp(n);
	dp[0] = v[0];
	long long __max = dp[0];
	for(int i=1;i<n;i++){
		dp[i] = (dp[i-1]>0) ? dp[i-1]+v[i] : v[i];
		if(dp[i]>__max){
			__max = dp[i];
		}
	}
	cout<<__max<<endl;
}