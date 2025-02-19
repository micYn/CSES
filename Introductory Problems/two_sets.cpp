#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n; cin>>n;
	unsigned long long sum = (unsigned long long)(n+1)*n/2;
	
	if(sum%2 == 1){
		cout<<"NO"<<endl;
	}
	else{
		unsigned long long target = sum/2;
		
		vector<int> v1(0), v2(0);
		for(int i=n;i>=1;i--){
			if(i<=target && target>0){
				target-=i;
				v1.push_back(i);
			}
			else{
				v2.push_back(i);
			}
		}
		
		cout<<"YES"<<endl;
		cout<<v1.size()<<endl;
		for(auto x : v1)	cout<<x<<" ";
		cout<<endl<<v2.size()<<endl;
		for(auto x : v2)	cout<<x<<" ";
		cout<<endl;
	}
	return 0;
}