#include <iostream>
using namespace std;
int main(){
	const long long ten_pow_9 = 1000000000;
	int n; cin>>n;
	long long ans=1;
	for(int i=1;i<=n;i++){
		ans = (ans*2)%(ten_pow_9+7);
	}
	
	cout<<ans<<endl;

	return 0;
}