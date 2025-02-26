#include <iostream>
#include <set>
#include <climits>
#include <algorithm>
using namespace std;

typedef pair<int, int> pi;

int main(){
	int n, x;
	cin>>n>>x;
	multiset<pi> ms;
	for(int i=1;i<=n;i++){
		int tmp;
		cin>>tmp;
		ms.insert({tmp,i});
	}
	for(const pi& p : ms){
		ms.erase(ms.find(p));
		auto it = ms.lower_bound({x-p.first, INT_MIN});
		if(it!=ms.end() && (*it).first==x-p.first){
			cout<<(*it).second<<" "<<p.second<<endl;
			return 0;
		}
		ms.insert(p);
	}

	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}